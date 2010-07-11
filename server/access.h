/*
 ******************************************************************************
 *
 * File:    access.h
 *
 * Author:  Damien Stuart
 *
 * Purpose: Header file for fwknopd access.c.
 *
 * Copyright (C) 2009 Damien Stuart (dstuart@dstuart.org)
 *
 *  License (GNU Public License):
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program; if not, write to the Free Software
 *     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *     USA
 *
 ******************************************************************************
*/
#ifndef ACCESS_H
#define ACCESS_H

#define PROTO_TCP   6
#define PROTO_UDP   17

/* Function Prototypes
*/
void parse_access_file(fko_srv_options_t *opts);
acc_stanza_t* acc_check_source(fko_srv_options_t *opts, uint32_t ip);
int acc_check_port_access(acc_stanza_t *acc, char *port_str);
int acc_check_gpg_remote_id(acc_stanza_t *acc, char *gpg_id);
void dump_access_list(fko_srv_options_t *opts);
void expand_acc_port_list(acc_port_list_t **plist, char *plist_str);
void free_acc_port_list(acc_port_list_t *plist);

#endif /* ACCESS_H */

/***EOF***/