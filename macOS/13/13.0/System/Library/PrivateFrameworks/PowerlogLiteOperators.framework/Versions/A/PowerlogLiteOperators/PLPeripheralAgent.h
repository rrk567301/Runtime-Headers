@class PLIOKitOperatorComposition, NSDate;

@interface PLPeripheralAgent : PLAgent

@property (retain) NSDate *lastEntryDate;
@property (retain) PLIOKitOperatorComposition *displayPortComposition;
@property (retain) PLIOKitOperatorComposition *displayPortUSBComposition;
@property (retain) PLIOKitOperatorComposition *displayPortTerminatedComposition;
@property (retain) PLIOKitOperatorComposition *USBAddComposition;
@property (retain) PLIOKitOperatorComposition *USBRemoveComposition;
@property (retain) PLIOKitOperatorComposition *thunderboltAddComposition;
@property (retain) PLIOKitOperatorComposition *thunderboltRemoveComposition;
@property (retain) PLIOKitOperatorComposition *externalDisplayAddComposition;
@property (retain) PLIOKitOperatorComposition *externalDisplayRemoveComposition;
@property (retain) PLIOKitOperatorComposition *lidComposition;

+ (void)load;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)railDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitionsDeviceState;
+ (id)entryEventForwardDefinitionsClamshellState;
+ (id)entryEventForwardDefinitionDisplayPort;

- (id)init;
- (void).cxx_destruct;
- (void)log;
- (void)initOperatorDependancies;
- (void)deviceChanged:(unsigned long long)a0 withObject:(unsigned int)a1;
- (void)initUSB;
- (void)initLid;
- (BOOL)SupportsIOSWithVID:(int)a0 andPID:(int)a1;
- (BOOL)retrieveDeviceInfoUSB:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (void)initThunderbolt;
- (BOOL)retrieveDeviceInfoThunderbolt:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (void)initExternalDisplay;
- (BOOL)retrieveDeviceInfoDisplay:(unsigned int)a0 forDeviceState:(struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a1;
- (BOOL)getInt32FromCFobj:(void *)a0 withOutput:(unsigned int *)a1;
- (void)climbIORegistryForAttribute:(unsigned int)a0 forKey:(struct __CFString { } *)a1 withDepth:(unsigned int)a2 withBlock:(id /* block */)a3;
- (void)applyBlock:(void *)a0 withIterator:(unsigned int)a1;
- (id)retrieveDisplayPortProperties:(unsigned int)a0;
- (void)logEventForwardDeviceState:(const struct PLPeripheralDeviceState { unsigned long long x0; char *x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; BOOL x7; BOOL x8; } *)a0;
- (void)logEventForwardDisplayPort:(id)a0;
- (void)logEventForwardClamshellState:(BOOL)a0;

@end
