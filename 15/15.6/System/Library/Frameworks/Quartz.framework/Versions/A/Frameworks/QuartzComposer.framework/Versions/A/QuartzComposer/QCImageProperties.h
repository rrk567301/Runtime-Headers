@class QCImagePort, QCStructurePort;

@interface QCImageProperties : QCPatch {
    QCImagePort *inputImage;
    QCStructurePort *outputProperties;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
