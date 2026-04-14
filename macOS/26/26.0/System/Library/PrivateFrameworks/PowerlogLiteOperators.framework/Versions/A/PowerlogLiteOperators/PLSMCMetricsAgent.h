@class PLTimer, NSDate, NSArray, NSSet, PLStateTrackingComposition, NSDictionary, PLEntryNotificationOperatorComposition, NSMutableArray, NSNumber, PLNSNotificationOperatorComposition;

@interface PLSMCMetricsAgent : PLAgent

@property (retain) NSNumber *currentLux;
@property (retain) PLTimer *monitorTimer;
@property unsigned int loggingCounter;
@property double cycleCountInterval;
@property unsigned int loggingThreshold;
@property (retain) NSDate *lastFocalSampleDate;
@property struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; BOOL x12; } *smcConnection;
@property unsigned int powerDeliveryCounter;
@property double monitorCadence;
@property (retain) NSSet *availableKeys;
@property (retain) NSDictionary *lastAccumlatedSample;
@property (retain) PLStateTrackingComposition *stateTracker;
@property (retain) NSArray *loggedInstantKeysArray;
@property (retain) PLEntryNotificationOperatorComposition *sbc;
@property (retain) NSDate *lastDisplayAccumulatedSampleEndDate;
@property (retain) NSDictionary *lastDisplayAccumlatedSample;
@property (retain) NSMutableArray *accumGaugeArray;
@property (retain) NSMutableArray *instantGaugeArray;
@property (retain) NSArray *loggedAccumulatedKeysArray;
@property (retain) NSArray *loggedPowerDeliveryKeysArray;
@property (retain) PLEntryNotificationOperatorComposition *focalAppSwitch;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLEntryNotificationOperatorComposition *luxEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *screenStateNotification;

+ (void)load;
+ (BOOL)isEnabled;
+ (id)parsePMUEvents:(unsigned long long)a0;
+ (void)reportPMUEventsToCA:(id)a0;
+ (BOOL)shouldModelDisplayPowerFromSMC;
+ (BOOL)supportsSMC;

- (void)initOperatorDependancies;
- (void)dealloc;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (id)getAllowedKeys:(id)a0;
- (void)logDisplayPower;
- (BOOL)accumSupported;
- (BOOL)anyVirtualTemperatureAboveThreshold;
- (id)getAllKeys;
- (id)getAllowedAccumulatedKeys;
- (id)getAllowedInstantKeys;
- (id)getAllowedPowerDeliveryKeys;
- (id)getOSAccumListFrom:(id)a0;
- (id)getTVKeys;
- (id)getValueFromAccumSample:(id)a0 lastSample:(id)a1;
- (id)handleNonNumericKeys:(unsigned int)a0 keyInfo:(struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; })a1;
- (id)handleNumericKeys:(unsigned int)a0 keyInfo:(struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; })a1 keyName:(id)a2 ret:(char)a3;
- (void)handleSleepWakeStateChange;
- (void)initOSMetrics;
- (const struct SMCAccumChannelInfo { } *)isKeyOSAccumSupported:(id)a0;
- (BOOL)isThermalMitigationAboveThreshold;
- (BOOL)isThermalPressureFanNoiseAboveThreshold;
- (void)logAccumlatedLookUpTable;
- (void)logAccumulatedKeysToPL:(BOOL)a0 ToCA:(BOOL)a1;
- (void)logEventPointInstantKeys;
- (void)logPowerDeliveryKeys;
- (void)logSMCLookUpTable;
- (void)logThermalKeysToCoreAnalytics;
- (void)powerDeliveryCallback;
- (id)readAccumSMCKey:(id)a0 toOutput:(struct { double x0; unsigned int x1; unsigned char x2; } *)a1;
- (id)readSMCKey:(id)a0;
- (id)sampleAccumulatedKeys:(id)a0;
- (void)thermalMonitorCallback;
- (BOOL)writeSMCKey:(id)a0 withValue:(unsigned long long)a1;

@end
