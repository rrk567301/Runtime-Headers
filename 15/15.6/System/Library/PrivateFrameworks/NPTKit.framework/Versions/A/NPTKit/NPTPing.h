@class NSObject, NSString, NPTPingResult, SimplePing, NSMutableArray;
@protocol OS_nw_activity;

@interface NPTPing : NSObject <NSSecureCoding, SimplePingDelegate, NSCopying> {
    SimplePing *pinger;
    unsigned long long pingCount;
    NSMutableArray *pings;
    NSObject<OS_nw_activity> *activityParent;
    NSObject<OS_nw_activity> *pingActivity;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NPTPingResult *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (void)stop;
- (void)sendPing;
- (void)simplePing:(id)a0 didStartWithAddress:(id)a1;
- (id)initWithNetworkActivityParent:(id)a0;
- (id)initWithNetworkActivityParent:(id)a0 pingTarget:(id)a1;
- (void)simplePing:(id)a0 didFailToSendPacket:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)simplePing:(id)a0 didFailWithError:(id)a1;
- (void)simplePing:(id)a0 didReceivePingResponsePacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)simplePing:(id)a0 didReceiveUnexpectedPacket:(id)a1;
- (void)simplePing:(id)a0 didSendPacket:(id)a1 sequenceNumber:(unsigned short)a2;
- (void)simplePing:(id)a0 didTimeOut:(id)a1 sequenceNumber:(unsigned short)a2 error:(id)a3;
- (void)startWithNumberOfPings:(unsigned long long)a0 forcingIPv4:(char)a1 forcingIPv6:(char)a2;
- (void)startWithNumberOfPings:(unsigned long long)a0 forcingIPv4:(char)a1 forcingIPv6:(char)a2 completion:(id /* block */)a3;

@end
