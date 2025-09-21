@class QCImagePort, QCNumberPort;

@interface QCImageOrigin : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *outputPixelsOriginX;
    QCNumberPort *outputPixelsOriginY;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
