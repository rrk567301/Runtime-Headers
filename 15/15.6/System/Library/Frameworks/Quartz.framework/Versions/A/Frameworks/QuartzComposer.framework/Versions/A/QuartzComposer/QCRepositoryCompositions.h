@class QCIndexPort, QCStructurePort;

@interface QCRepositoryCompositions : QCPatch {
    QCIndexPort *inputProtocol;
    QCStructurePort *inputAttributes;
    QCStructurePort *outputCompositions;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
