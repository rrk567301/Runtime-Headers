@class QCImagePort, QCNumberPort;

@interface QCImageFocusRect : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *outputOriginX;
    QCNumberPort *outputOriginY;
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (id)_getFocusRect:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
