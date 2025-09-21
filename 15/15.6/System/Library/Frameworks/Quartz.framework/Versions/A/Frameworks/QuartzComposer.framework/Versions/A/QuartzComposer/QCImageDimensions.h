@class QCIndexPort, QCImagePort, QCNumberPort;

@interface QCImageDimensions : QCPatch {
    QCImagePort *inputImage;
    QCNumberPort *outputWidth;
    QCNumberPort *outputHeight;
    QCIndexPort *outputPixelsWide;
    QCIndexPort *outputPixelsHigh;
    QCNumberPort *outputRatio;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (void)receiveMessage:(id)a0 name:(id)a1 attributes:(id)a2;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
