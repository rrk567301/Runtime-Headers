@class QCImagePort, QCStructurePort;

@interface QCDepthBlurEffectDetector : QCPatch {
    QCImagePort *inputImage;
    QCStructurePort *outputFeatures;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
