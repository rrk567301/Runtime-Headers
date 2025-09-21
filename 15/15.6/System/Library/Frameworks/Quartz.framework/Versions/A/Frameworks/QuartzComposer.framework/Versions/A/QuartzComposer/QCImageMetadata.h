@class QCImagePort, QCStringPort;

@interface QCImageMetadata : QCPatch {
    QCImagePort *inputImage;
    QCStringPort *outputMetadata;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
