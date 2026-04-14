@class VNFaceprint;

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) VNFaceprint *faceprint;

+ (BOOL)supportsSecureCoding;

- (long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFaceprint:(id)a0;

@end
