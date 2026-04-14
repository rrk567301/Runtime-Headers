@class NSArray, AVOutputDeviceDiscoverySession, NSNotificationCenter, AVOutputContext;

@interface CRKConcreteOutputDeviceBrowsingSession : NSObject <CRKOutputDeviceBrowsingSession>

@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *discoverySession;
@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, copy, nonatomic) NSArray *outputDevices;

+ (id)sessionWithOutputContext:(id)a0 notificationCenter:(id)a1;

- (void)invalidate;
- (void).cxx_destruct;
- (id)observeBrowsedOutputDeviceChangesWithHandler:(id /* block */)a0;
- (id)initWithDiscoverySession:(id)a0 outputContext:(id)a1 notificationCenter:(id)a2;

@end
