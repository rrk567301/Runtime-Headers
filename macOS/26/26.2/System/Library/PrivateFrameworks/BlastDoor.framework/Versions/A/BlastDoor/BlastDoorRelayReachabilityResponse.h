@class NSString, BlastDoorRelayReachabilityResult;

@interface BlastDoorRelayReachabilityResponse : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityResponse;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorRelayReachabilityResult *result;

- (void).cxx_destruct;
- (id)init;

@end
