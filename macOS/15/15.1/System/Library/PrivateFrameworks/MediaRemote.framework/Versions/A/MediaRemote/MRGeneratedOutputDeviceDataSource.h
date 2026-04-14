@class NSString, MROutputDeviceConfiguration, NSSet;
@protocol MROutputDeviceDataSourceDelegate;

@interface MRGeneratedOutputDeviceDataSource : NSObject <MROutputDeviceDataSource>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MROutputDeviceConfiguration *configuration;
@property (readonly, nonatomic) NSSet *availableOutputDevices;
@property (readonly, nonatomic) NSSet *pendingOutputDevices;
@property (readonly, nonatomic) NSSet *selectedOutputDevices;
@property (weak, nonatomic) id<MROutputDeviceDataSourceDelegate> delegate;
@property (nonatomic) unsigned long long discoveryMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)compatibleWithConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)performModification:(id)a0 completion:(id /* block */)a1;
- (BOOL)compatibleWithConfiguration:(id)a0;
- (void)customizeOutputDevice:(id)a0 atIndex:(long long)a1;

@end
