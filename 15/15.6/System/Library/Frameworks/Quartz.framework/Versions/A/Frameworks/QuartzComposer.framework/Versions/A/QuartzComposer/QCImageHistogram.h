@class QCImagePort, QCStructurePort;

@interface QCImageHistogram : QCPatch {
    QCImagePort *inputImage;
    QCStructurePort *outputRedHistogram;
    QCStructurePort *outputGreenHistogram;
    QCStructurePort *outputBlueHistogram;
    QCStructurePort *outputAlphaHistogram;
}

+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
