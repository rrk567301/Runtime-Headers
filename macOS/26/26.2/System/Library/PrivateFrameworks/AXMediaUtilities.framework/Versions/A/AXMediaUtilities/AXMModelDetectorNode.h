@class NSURL, NSString, VNCoreMLModel;

@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel *_model;
}

@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (id)title;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_loadModel:(id *)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)preloadModelIfNeeded:(id *)a0;
- (BOOL)requiresVisionFramework;

@end
