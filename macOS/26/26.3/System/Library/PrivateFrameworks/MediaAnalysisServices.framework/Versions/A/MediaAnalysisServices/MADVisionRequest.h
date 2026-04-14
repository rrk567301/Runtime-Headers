@class VNRequest;

@interface MADVisionRequest : MADRequest

@property (readonly, nonatomic) VNRequest *visionRequest;

+ (BOOL)supportsSecureCoding;
+ (id)requestWithVisionRequest:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVisionRequest:(id)a0 error:(id *)a1;

@end
