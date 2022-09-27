# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 00:44:10 by tgenoves          #+#    #+#              #
#    Updated: 2022/09/22 03:36:31 by tgenoves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

FT_LINE2=$FT_LINE2+1
FT_DIFF=$(($FT_LINE2-$FT_LINE1))

cat -e /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | awk -F : '{ print $1 }' | rev | sort -fnr | awk -v ln1=$FT_LINE1 -v ln2=$FT_LINE2 'NR >= ln1 && NR <= ln2' | awk '{ printf $0", " }' | sed 's/.\{2\}$/./'
