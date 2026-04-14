@class VNFaceprint;

@interface MADMultiModalInputFaceprintSegment : MADMultiModalInputSegment

@property (readonly, nonatomic) VNFaceprint *faceprint;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceprint:(id)a0;

@end
