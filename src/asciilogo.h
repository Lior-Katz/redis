/*
 * Copyright (c) 2009-Present, Redis Ltd.
 * All rights reserved.
 *
 * Licensed under your choice of (a) the Redis Source Available License 2.0
 * (RSALv2); or (b) the Server Side Public License v1 (SSPLv1); or (c) the
 * GNU Affero General Public License v3 (AGPLv3).
 */

const char *ascii_logo =
"                                              ____                                         \n"
"  ___                                      .-~. /_\"-._                                     \n"
"`-._~-.                                  / /_ \"~o\\  :Y                                     \n"
"      \\  \\                                / : \\~x.  ` ')                                   \n"
"      ]  Y                              /  |  Y< ~-.__j        Redis Open Source           \n"
"     /   !                        _.--~T : l  l<  /.-~         %s (%s/%d) %s bit\n"
"    /   /                 ____.--~ .   ` l /~\\ \\<|Y            Running in %s mode\n"
"   /   /             .-~~\"        /| .    ',-~\\ \\L|            Port: %d\n"
"  /   /             /     .^   \\ Y~Y \\.^>/l_   \"--'            PID: %ld\n"
" /   Y           .-\"(  .  l__  j_j l_/ /~_.-~    .                                          \n"
"Y    l          /    \\  )    ~~~.\" / `/\"~ / \\.__/l_                                        \n"
"|     \\     _.-\"      ~-{__     l  :  l._Z~-.___.--~                 https://redis.io      \n"
"|      ~---~           /   ~~\"---\\_  ' __[>                                                \n"
"l  .                _.^   ___     _>-y~                                                    \n"
" \\  \\     .      .-~   .-~   ~>--\"  /                                                     \n"
"  \\  ~---\"            /     ./  _.-'                                                       \n"
"   \"-.,_____.,_  _.--~\\     _.-~                                                           \n"
"               ~~     (   _}                                                               \n"
"                      `. ~(                                                                \n"
"                        )  \\                                                               \n"
"                  /,`--'~\\--'~\\                                                            \n"
"                  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                  \n"
"                                                                                           \n\n";