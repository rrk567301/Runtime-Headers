@interface HAP2ThreadNetworkUtil : HAP2LoggingObject

+ (id)_addressToCIDR:(struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0 withNetmask:(struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a1;
+ (BOOL)_interface:(id)a0 hasAddressesWithPrefix:(id)a1;
+ (id)_sharedThreadClient;
+ (id)getCurrentNetworkInterfaces;
+ (BOOL)isAddress:(id)a0 inNetwork:(id)a1;
+ (BOOL)isThreadIPv6Address:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0 fromInterfaces:(id)a1;
+ (BOOL)isThreadInterface:(id)a0;
+ (BOOL)isThreadRadioAvailable;
+ (id)threadMeshLocalPrefix;

@end
