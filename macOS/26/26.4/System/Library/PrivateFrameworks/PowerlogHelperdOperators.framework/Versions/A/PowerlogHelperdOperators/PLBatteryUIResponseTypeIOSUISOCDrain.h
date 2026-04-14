@class NSArray, NSString, PLBatteryUIResponderService, NSDate;

@interface PLBatteryUIResponseTypeIOSUISOCDrain : NSObject <PLBatteryUIResponseProtocol>

@property (retain) NSDate *start;
@property (retain) NSDate *end;
@property double bucketSize;
@property (retain) NSArray *uiLevelEntries;
@property BOOL isDynamicEnd;
@property double dynamicEndOffset;
@property (retain) NSArray *resultArray;
@property (retain) NSArray *dynamicResultArray;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dependencies;
- (void)run;
- (void)configure:(id)a0;
- (void).cxx_destruct;
- (id)result;
- (void)coalesce;
- (int)drainForInterval:(BOOL)a0 start:(int)a1 max:(int)a2 end:(int)a3;
- (void)updateInterval:(struct { BOOL x0; int x1; int x2; int x3; double x4; BOOL x5; } *)a0 level:(int)a1 timestamp:(double)a2;
- (void)finalizeInterval:(struct { BOOL x0; int x1; int x2; int x3; double x4; BOOL x5; } *)a0 uiDrainTotal:(int *)a1 dynamicDrainTotal:(int *)a2 dynamicCutoff:(double)a3 includeDynamic:(BOOL)a4;
- (void)initializeInterval:(struct { BOOL x0; int x1; int x2; int x3; double x4; BOOL x5; } *)a0 isCharging:(BOOL)a1 level:(int)a2 timestamp:(double)a3;
- (void)processBucketAtIndex:(int)a0 bucketStart:(id)a1 bucketEnd:(id)a2 levelIndex:(int *)a3 uiDrain:(int *)a4 dynamicDrain:(int *)a5;

@end
