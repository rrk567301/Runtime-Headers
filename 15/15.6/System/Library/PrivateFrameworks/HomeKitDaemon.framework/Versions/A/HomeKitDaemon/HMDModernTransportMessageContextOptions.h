@class NSSet, NSString;

@interface HMDModernTransportMessageContextOptions : NSObject

@property (readonly) NSSet *transports;
@property (readonly) double timeoutOverride;
@property (readonly) double timeToLive;
@property (readonly) char expectsMultipleResponses;
@property (readonly, getter=isTrackingDeviceReachability) char trackingDeviceReachability;
@property (readonly) NSString *requestStartTimeHeaderKey;
@property (readonly) NSString *timeToLiveHeaderKey;
@property (readonly) char expectRapportSuccess;

+ (id)newWithBuilder:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;

@end
