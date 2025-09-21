@interface ATXMotion : NSObject

@property (readonly, nonatomic) long long motiontype;
@property (readonly, nonatomic) char stationary;
@property (readonly, nonatomic) char canPredictClipsGivenRecentMotion;

+ (id)getMotionStringFromMotionType:(long long)a0;
+ (id)_getMotionStringFromCMMotionActivity:(id)a0;
+ (long long)_getMotionTypeFromCMMotionActivity:(id)a0;
+ (char)canPredictClipsForActivityStream:(id)a0;
+ (id)findMostCommonAndRecent:(id)a0 identityFunc:(id /* block */)a1;
+ (id)summarizeActivityStream:(id)a0;

- (id)print;
- (id)getMotionString;
- (id)initWithMotionType:(long long)a0 stationary:(char)a1 canPredictClipsGivenRecentMotion:(char)a2;
- (id)initFromCMMotionActivity:(id)a0;
- (id)initFromCMMotionActivity:(id)a0 canPredictClipsGivenRecentMotion:(char)a1;

@end
