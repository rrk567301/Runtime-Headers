@class NSString, ULPoseEstimationMO;

@interface ULRelativePosesMO : NSManagedObject

@property (retain, nonatomic) NSString *refIdentifier;
@property (nonatomic) float transform_c0;
@property (nonatomic) float transform_c1;
@property (nonatomic) float transform_c2;
@property (nonatomic) float transform_c3;
@property (nonatomic) float transform_c4;
@property (nonatomic) float transform_c5;
@property (nonatomic) float transform_c6;
@property (nonatomic) float transform_c7;
@property (nonatomic) float transform_c8;
@property (nonatomic) float transform_c9;
@property (nonatomic) float transform_c10;
@property (nonatomic) float transform_c11;
@property (nonatomic) float transform_c12;
@property (nonatomic) float transform_c13;
@property (nonatomic) float transform_c14;
@property (nonatomic) float transform_c15;
@property (nonatomic) short numInliers;
@property (nonatomic) short numMatches;
@property (retain, nonatomic) ULPoseEstimationMO *poseEstimation;

+ (id)fetchRequest;
+ (id)createFromDO:(const struct ULRelativePosesDO { struct uuid { unsigned char x0[16]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; unsigned short x2; unsigned short x3; } *)a0 withPoseEstimationMO:(id)a1 inManagedObjectContext:(id)a2;

- (struct optional<ULRelativePosesDO> { union { char x0; struct ULRelativePosesDO { struct uuid { unsigned char x0[16]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; unsigned short x2; unsigned short x3; } x1; } x0; BOOL x1; })convertToDO;

@end
