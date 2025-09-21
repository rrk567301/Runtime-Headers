@class VNClassifyImageAestheticsRequest;

@interface AXMImageAestheticsNode : AXMEvaluationNode

@property (retain, nonatomic) VNClassifyImageAestheticsRequest *_imageAestheticsRequest;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (char)validateVisionKitSoftLinkSymbols;

@end
