@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char is3DLandmarks;
@property (retain, nonatomic) NSDictionary *results;

+ (id)unitTestingFaceLandmarksIs3D:(char)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)localizedStringForLandmarkType:(unsigned long long)a0;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)a0;
- (id)initWithVisionFaceLandmarks:(id)a0;
- (id)pointsArrayForRegion:(id)a0;

@end
