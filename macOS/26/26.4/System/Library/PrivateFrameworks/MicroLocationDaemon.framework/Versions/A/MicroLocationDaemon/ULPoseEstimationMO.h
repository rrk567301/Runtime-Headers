@class NSString, NSSet, ULLoiMO;

@interface ULPoseEstimationMO : NSManagedObject

@property (retain, nonatomic) NSString *queryFrameIdentifier;
@property (nonatomic) long long queryFrameIndex;
@property (nonatomic) int queryFrameCameraIdentifier;
@property (nonatomic) double queryFrameTimestamp;
@property (retain, nonatomic) NSSet *relativePoses;
@property (retain, nonatomic) ULLoiMO *loi;
@property (nonatomic) float deviceMotionTranslationX;
@property (nonatomic) float deviceMotionTranslationY;
@property (nonatomic) float deviceMotionTranslationZ;
@property (nonatomic) float deviceMotionAttitudeX;
@property (nonatomic) float deviceMotionAttitudeY;
@property (nonatomic) float deviceMotionAttitudeZ;
@property (nonatomic) float deviceMotionAttitudeW;

+ (id)fetchRequest;
+ (id)createFromDO:(const void *)a0 withLoiMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULPoseEstimationDO> { union { char x0; struct ULPoseEstimationDO { struct uuid { unsigned char x0[16]; } x0; unsigned long long x1; unsigned int x2; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x3; struct vector<ULRelativePosesDO, std::allocator<ULRelativePosesDO>> { struct ULRelativePosesDO *x0; struct ULRelativePosesDO *x1; struct { struct ULRelativePosesDO *x0; } x2; } x4; } x1; } x0; BOOL x1; })convertToDO;

@end
