@class NSArray, NSSet, NSString, MROutputDeviceConfiguration;
@protocol MROutputDevicesControllerDelegate;

@interface MROutputDevicesController : NSObject <MROutputDeviceController>

@property (readonly, nonatomic) NSArray *availableOutputDevices;
@property (readonly, nonatomic) NSSet *pendingOutputDevices;
@property (readonly, nonatomic) NSSet *selectedOutputDevices;
@property (retain, nonatomic) NSArray *collators;
@property (weak, nonatomic) id<MROutputDevicesControllerDelegate> delegate;
@property (nonatomic) unsigned long long discoveryMode;
@property (readonly, nonatomic) MROutputDeviceConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)performModification:(id)a0 completion:(id /* block */)a1;
- (void)updateAvailableOutputDevices:(id)a0;
- (void)updateOutputDevices;
- (void)updatePendingOutputDevices:(id)a0;
- (void)updateSelectedOutputDevices:(id)a0;

@end
