@class NSString;

@interface BlastDoorRelayReachabilityHandleResult : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityHandleResult;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *handleID;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) BOOL isReachable;

- (id)init;
- (void).cxx_destruct;

@end
