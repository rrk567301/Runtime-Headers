@class CMNatalimeterInternal;

@interface CMNatalimeter : NSObject

@property (readonly, nonatomic) CMNatalimeterInternal *_internal;

+ (id)maxNatalieEntries;
+ (BOOL)setUserProfile:(id)a0 error:(id *)a1;
+ (double)briskMinuteMetsThreshold;
+ (double)activeMetsThreshold;
+ (id)userProfile;
+ (id)defaultUserProfile;
+ (BOOL)setUserInfo:(id)a0 error:(id *)a1;
+ (BOOL)resetCalibrationDataWithError:(id *)a0;
+ (BOOL)isNatalimeterAvailable;
+ (id)computeRestingCaloriesAtRate:(unsigned long long)a0 user:(id)a1 duration:(double)a2;
+ (double)computeTimeToActiveCalories:(id)a0 user:(id)a1 workoutType:(long long)a2;

- (void)dealloc;
- (id)init;
- (void)queryAbsoluteNatalimetryDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)queryAbsoluteNatalimetryDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)startAbsoluteNatalimetryDataUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteNatalimetryDataUpdates;

@end
