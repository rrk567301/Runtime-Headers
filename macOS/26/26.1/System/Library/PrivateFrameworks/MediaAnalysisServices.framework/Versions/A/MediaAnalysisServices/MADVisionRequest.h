@class VNRequest;

@interface MADVisionRequest : MADRequest

@property (readonly, nonatomic) VNRequest *visionRequest;

+ (BOOL)supportsSecureCoding;
+ (id)requestWithVisionRequest:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVisionRequest:(id)a0 error:(id *)a1;

@end
