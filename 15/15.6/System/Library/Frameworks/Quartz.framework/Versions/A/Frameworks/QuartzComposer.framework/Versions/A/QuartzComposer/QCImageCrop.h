@class QCImagePort, QCNumberPort;

@interface QCImageCrop : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *inputRectangle_X;
    QCNumberPort *inputRectangle_Y;
    QCNumberPort *inputRectangle_Z;
    QCNumberPort *inputRectangle_W;
    QCImagePort *outputImage;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
