@class QCIndexPort, QCStructurePort, QCImagePort;

@interface QCOpenCLConverter : QCPatch {
    QCStructurePort *_inputStream;
    QCImagePort *_inputImage;
    QCStructurePort *_inputImage3D;
    QCStructurePort *_outputStream;
    QCImagePort *_outputImage;
    QCStructurePort *_outputImage3D;
    QCIndexPort *_outputWidth;
    QCIndexPort *_outputHeight;
    QCIndexPort *_outputDepth;
    unsigned long long _copyType;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (char)setState:(id)a0;
- (char)setup:(id)a0;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)setCopyType:(unsigned long long)a0;

@end
