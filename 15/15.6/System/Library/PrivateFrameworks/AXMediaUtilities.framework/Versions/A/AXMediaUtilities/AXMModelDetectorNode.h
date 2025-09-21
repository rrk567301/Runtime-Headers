@class NSURL, NSString, VNCoreMLModel;

@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel *_model;
}

@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (char)supportsSecureCoding;
+ (id)title;
+ (char)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_loadModel:(id *)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (char)preloadModelIfNeeded:(id *)a0;
- (char)requiresVisionFramework;

@end
