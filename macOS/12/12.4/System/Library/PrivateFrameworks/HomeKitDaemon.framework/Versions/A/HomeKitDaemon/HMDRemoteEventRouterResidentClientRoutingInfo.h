@class NSString, NSUUID;

@interface HMDRemoteEventRouterResidentClientRoutingInfo : NSObject

@property (readonly, copy) NSString *eventFilterPrefix;
@property (readonly, copy) NSUUID *deviceIdentifier;

- (void).cxx_destruct;
- (id)initWithEventFilterPrefix:(id)a0 deviceIdentifier:(id)a1;

@end
