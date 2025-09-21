@class NSString, NSArray;

@interface IMSMaskMetadata : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int edgeTreatment;
@property (nonatomic) int cpInterpolation;
@property (nonatomic) float featheringWidth;
@property (nonatomic) int maskStereoRelation;
@property (copy, nonatomic) NSArray *leftControlPoints;
@property (copy, nonatomic) NSArray *rightControlPoints;
@property (nonatomic) BOOL isRedChannelOnly;

+ (int)setMaskControlPointInterpolationMethod:(id)a0;
+ (int)setMaskEdgeTreatment:(id)a0;
+ (int)setMaskStereoRelation:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
