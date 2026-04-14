@class NSObject;
@protocol OS_xpc_object;

@interface DeviceSelectionRoutingServiceWakeStore : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *XPCEvent;

+ (id)sharedInstance;

- (id)XPCEvent;
- (void)setXPCEvent:(id)a0;

@end
