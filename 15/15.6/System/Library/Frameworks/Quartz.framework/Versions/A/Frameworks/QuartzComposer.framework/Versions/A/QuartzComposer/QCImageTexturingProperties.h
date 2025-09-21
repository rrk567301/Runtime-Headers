@class QCNumberPort, QCImagePort, QCIndexPort;

@interface QCImageTexturingProperties : QCPatch {
    QCImagePort *inputImage;
    QCIndexPort *inputTarget;
    QCIndexPort *inputMipmaps;
    QCNumberPort *inputScaleX;
    QCNumberPort *inputScaleY;
    QCNumberPort *inputRotate;
    QCNumberPort *inputTranslateX;
    QCNumberPort *inputTranslateY;
    QCImagePort *outputImage;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
