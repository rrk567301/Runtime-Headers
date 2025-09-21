@class QCImagePort, QCNumberPort;

@interface QCImageTransform : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *inputTransform_OriginX;
    QCNumberPort *inputTransform_OriginY;
    QCNumberPort *inputTransform_ScaleX;
    QCNumberPort *inputTransform_ScaleY;
    QCNumberPort *inputTransform_Rotate;
    QCNumberPort *inputTransform_TranslateX;
    QCNumberPort *inputTransform_TranslateY;
    QCImagePort *outputImage;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
