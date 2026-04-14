@class VNFaceprint;

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) VNFaceprint *faceprint;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFaceprint:(id)a0;

@end
