@class QCVirtualPort, QCStructurePort, QCPort;

@interface QCStructureMember : QCPatch {
    QCStructurePort *inputStructure;
    QCVirtualPort *outputMember;
    QCPort *_inPort;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
