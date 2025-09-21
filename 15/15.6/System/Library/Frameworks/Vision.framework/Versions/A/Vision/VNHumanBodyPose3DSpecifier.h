@class NSArray;

@interface VNHumanBodyPose3DSpecifier : VNRecognizedPoints3DSpecifier {
    NSArray *_orderedHumanBodyPose3DKeypoints;
    float _humanHeight;
}

@property (readonly, nonatomic) float bodyHeight;
@property (readonly, nonatomic) float heightEstimatedScale;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransformMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraRenderTransformMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;

+ (char)supportsSecureCoding;
+ (id)_stringRepresentationForRequestRevision:(unsigned long long)a0 abpkJoint:(id)a1 error:(id *)a2;
+ (id)supportedHumanBodyPose3DKeypointsRev1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)availableGroupKeys;
- (id)initWithHumanBody3DOutput:(id)a0 originatingRequestSpecifier:(id)a1;
- (id)pointKeyGroupLabelsMapping;

@end
