@class MROutputDeviceConfiguration, NSSet, MRAVRoutingDiscoverySession, MRAVOutputContext, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MROutputDeviceDataSourceDelegate;

@interface MRAVDiscoveryOutputDeviceDataSource : NSObject <MROutputDeviceDataSource>

@property (retain, nonatomic) MRAVOutputContext *outputContext;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *discoverySession;
@property (retain, nonatomic) NSSet *availableOutputDevices;
@property (retain, nonatomic) NSMutableArray *modificationRequests;
@property (retain, nonatomic) id callbackToken;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MROutputDeviceConfiguration *configuration;
@property (readonly, nonatomic) NSSet *pendingOutputDevices;
@property (readonly, nonatomic) NSSet *selectedOutputDevices;
@property (weak, nonatomic) id<MROutputDeviceDataSourceDelegate> delegate;
@property (nonatomic) unsigned long long discoveryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)compatibleWithConfiguration:(id)a0;

- (void)dealloc;
- (void)initialize;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)outputDeviceFromMROutputDevice:(id)a0;
- (void)performModification:(id)a0 completion:(id /* block */)a1;
- (BOOL)compatibleWithConfiguration:(id)a0;
- (id)createConfiguration;
- (id)createOutputContext;
- (void)outputContextOutputDevicesDidChangeNotification:(id)a0;
- (void)updateAvailableOutputDevices;
- (void)updatePendingOutputDevices;
- (void)updateSelectedOutputDevices;

@end
