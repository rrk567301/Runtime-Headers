@class NSString, NPTPingResult, NSMutableArray, NSObject;
@protocol OS_nw_activity, OS_nw_resolver, OS_dispatch_source, OS_nw_connection, OS_dispatch_queue;

@interface NPTPing : NSObject <NSCopying> {
    NSObject<OS_nw_connection> *connection;
    NSObject<OS_nw_resolver> *resolver;
    NSObject<OS_dispatch_source> *timeoutTimer;
    int rawSocket;
    unsigned short sequenceNumber;
    NSObject<OS_dispatch_queue> *networkQueue;
    union { struct sockaddr_in { unsigned char sin_len; unsigned char sin_family; unsigned short sin_port; struct in_addr { unsigned int s_addr; } sin_addr; char sin_zero[8]; } ipv4; struct sockaddr_in6 { unsigned char sin6_len; unsigned char sin6_family; unsigned short sin6_port; unsigned int sin6_flowinfo; struct in6_addr { union { unsigned char __u6_addr8[16]; unsigned short __u6_addr16[8]; unsigned int __u6_addr32[4]; } __u6_addr; } sin6_addr; unsigned int sin6_scope_id; } ipv6; } destAddr;
    NSObject<OS_nw_activity> *pingActivity;
}

@property unsigned long long maxPings;
@property (retain) NSMutableArray *pings;
@property (copy) NSString *resolvedAddress;
@property (copy) NSString *hostname;
@property (copy) id /* block */ completion;
@property BOOL forceIPv6;
@property BOOL stopped;
@property (weak, nonatomic) id delegate;
@property (retain) NPTPingResult *results;
@property (readonly) NPTPingResult *intermediateResult;

+ (BOOL)supportsSecureCoding;

- (void)stop;
- (void)_cancelTimer;
- (void)_setupDNSResolverForHostname:(id)a0;
- (void)_sendPing;
- (void)_receiveReply;
- (struct { BOOL x0; unsigned short x1; id x2; })parseICMP4Reply:(id)a0 identifier:(unsigned short)a1;
- (unsigned short)checksumForData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)startPingingToHost:(id)a0 withNumberOfPings:(unsigned long long)a1 forceipv6:(BOOL)a2 completion:(id /* block */)a3;
- (struct { BOOL x0; unsigned short x1; id x2; })parseICMP6Reply:(id)a0 identifier:(unsigned short)a1;
- (void)_startPinging:(id)a0 withNumberOfPings:(unsigned long long)a1 forceipv6:(BOOL)a2 completion:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (id)createPingErrorWithCode:(long long)a0 message:(id)a1;
- (void)processIPv4Address:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0 forHostname:(id)a1;
- (void).cxx_destruct;
- (void)_setupTimerWithCurrentSequenceNumber:(unsigned short)a0;
- (id)init;
- (void)_setupSocketAndConnection;
- (void)_stop;
- (void)_completePingWithError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updatePingObjectWithReplyInfo:(struct { BOOL x0; unsigned short x1; id x2; })a0;
- (id)initWithNetworkActivityParent:(id)a0;
- (void)processIPv6Address:(const struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0 forHostname:(id)a1;

@end
