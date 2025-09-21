@class QCImagePort, QCStructurePort, QCNumberPort, QCStringPort;

@interface QCDepthBlurEffectParameters : QCPatch {
    QCStructurePort *inputImages;
    QCImagePort *outputImage;
    QCImagePort *outputDisparityImage;
    QCImagePort *outputAlphaMatteImage;
    QCNumberPort *outputFocusRectOriginX;
    QCNumberPort *outputFocusRectOriginY;
    QCNumberPort *outputFocusRectSizeWidth;
    QCNumberPort *outputFocusRectSizeHeight;
    QCStringPort *outputMetadata;
    QCStructurePort *outputFacialLandmarks;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
