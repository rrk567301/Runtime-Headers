@class CCContextDeviceGroup, NSString, NSArray, CCDisplayCorrectionService, CCEmitter, NSDictionary, CCDeviceCapabilities, NSMutableArray, CCContextDescriptor;

@interface CCContext : NSObject <CCVisitable> {
    CCDisplayCorrectionService *_displayCorrectionService;
    CCEmitter *_emitter;
}

@property (retain, nonatomic) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CCContextDeviceGroup *deviceGroup;
@property (retain, nonatomic) NSMutableArray *services;
@property (retain, nonatomic) CCContextDescriptor *descriptor;
@property (nonatomic) BOOL isDataPreallocated;
@property (nonatomic) unsigned long long dataBufferSize;
@property (retain, nonatomic) CCDeviceCapabilities *deviceCapabilites;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDictionary *activeLanes;
@property (readonly, nonatomic) NSDictionary *passes;
@property (readonly, nonatomic) NSDictionary *inlinePasses;

+ (void)initialize;
+ (id)drmServiceConnection;
+ (BOOL)hasProtectionEntitlement;
+ (void)setProtectedProcess;

- (id)debugQuickLookObject;
- (id)initWithDescriptor:(id)a0;
- (void)start;
- (void)acceptVisitor:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)stop;
- (void)build;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)generateServicesWithDescriptor:(id)a0;
- (id)allocateExternalLaneDataWithType:(Class)a0 metalDevice:(id)a1 protectionOptions:(unsigned long long)a2 count:(unsigned long long)a3;
- (BOOL)generateLanes;
- (BOOL)isRecreateContextNeeded;
- (BOOL)reallocateBuffers;
- (void)removeAllocations:(id)a0;
- (id)serviceForClass:(Class)a0;

@end
