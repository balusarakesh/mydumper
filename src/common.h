/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Authors:        David Ducos, Percona (david dot ducos at percona dot com)
*/

#ifndef _src_common_h
#define _src_common_h

#define STREAM_BUFFER_SIZE 1000000


char * checksum_table(MYSQL *conn, char *database, char *table, int *errn);
int write_file(FILE * file, char * buff, int len);
void create_backup_dir(char *new_directory) ;
guint strcount(gchar *text);
gboolean m_remove(gchar * directory, const gchar * filename);
void load_config_file(gchar * config_file, GOptionContext *context, const gchar * group);
void execute_gstring(MYSQL *conn, GString *ss);
gchar * identity_function(gchar ** r);
gchar *replace_escaped_strings(gchar *c);
void load_hash_from_key_file(GHashTable * set_session_hash, GHashTable *all_anonymized_function, gchar * config_file, const gchar * group_variables);
//void load_hash_from_key_file(GHashTable * set_session_hash, gchar * config_file, const gchar * group_variables);
void refresh_set_session_from_hash(GString *ss, GHashTable * set_session_hash);
gboolean is_table_in_list(gchar *table_name, gchar **table_list);
GHashTable * initialize_hash_of_session_variables();
void load_common_entries(GOptionGroup *main_group);
#endif

