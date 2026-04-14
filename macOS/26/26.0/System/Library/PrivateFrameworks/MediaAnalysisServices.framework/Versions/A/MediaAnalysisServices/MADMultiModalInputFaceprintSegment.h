@class VNFaceprint;

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) VNFaceprint *faceprint;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFaceprint:(id)a0;

@end
