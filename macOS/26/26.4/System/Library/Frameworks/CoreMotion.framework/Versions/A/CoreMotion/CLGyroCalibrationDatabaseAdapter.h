@class NSString;

@interface CLGyroCalibrationDatabaseAdapter : CLNotifierServiceAdapter <CLGyroCalibrationDatabaseProtocol>

@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)performSyncOnSilo:(id)a0 invoker:(id /* block */)a1;
+ (void)becameFatallyBlocked:(id)a0 index:(unsigned long long)a1;
+ (id)getSilo;
+ (BOOL)isSupported;

- (int)syncgetMaxDynamicTemperature;
- (void)doAsync:(id /* block */)a0 withReply:(id /* block */)a1;
- (BOOL)syncgetGyroStatsWithBias:(struct { float x0; float x1; float x2; } *)a0 slope:(struct { float x0; float x1; float x2; } *)a1 l2Error:(struct { float x0; float x1; float x2; } *)a2 isDynamic:(BOOL)a3 deltaBias:(struct { float x0; float x1; float x2; } *)a4 deltaSlope:(struct { float x0; float x1; float x2; } *)a5 deltaError:(struct { float x0; float x1; float x2; } *)a6 isDeltaDynamic:(BOOL)a7;
- (int)syncgetNonFactoryRoundCount;
- (void)dumpDatabase:(id)a0 onCompletion:(id /* block */)a1;
- (void)getBiasFitWithReply:(id /* block */)a0;
- (void)startFactoryGYTT;
- (int)syncgetNumTemperatures;
- (void)endService;
- (BOOL)syncgetBiasFit:(struct { int x0; double x1; double x2; float x3; float x4; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x5; } *)a0;
- (void)beginService;
- (id)init;
- (void)doAsync:(id /* block */)a0;
- (BOOL)syncgetSupportsMiniCalibration;
- (void *)adaptee;
- (BOOL)syncgetInsertWithBias:(const struct { float x0; float x1; float x2; } *)a0 variance:(const struct { float x0; float x1; float x2; } *)a1 temperature:(float)a2 timestamp:(double)a3;
- (BOOL)syncgetWipeDatabase;
- (double)syncgetLastMiniCalibration;
- (BOOL)syncgetDoSync:(id /* block */)a0;

@end
