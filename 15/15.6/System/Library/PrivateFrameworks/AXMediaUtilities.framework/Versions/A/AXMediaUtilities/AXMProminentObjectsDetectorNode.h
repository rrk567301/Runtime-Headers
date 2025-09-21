@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (char)requiresVisionFramework;
- (char)validateVisionKitSoftLinkSymbols;

@end
