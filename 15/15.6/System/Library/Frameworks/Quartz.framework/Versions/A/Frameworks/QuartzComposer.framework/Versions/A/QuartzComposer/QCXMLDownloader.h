@class QCStructurePort, QCNumberPort, QCStringPort, QCBooleanPort;

@interface QCXMLDownloader : QCDownloadPatch {
    QCStringPort *inputURL;
    QCBooleanPort *inputSignal;
    QCStructurePort *outputStructure;
    QCNumberPort *outputProgress;
    QCBooleanPort *outputSignal;
    char _synchronousMode;
}

+ (char)isSafe;
+ (char)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (char)synchronousMode;
- (void)setSynchronousMode:(char)a0;
- (char)setup:(id)a0;
- (id)createResourceWithDownloadedData:(id)a0 sourceURL:(id)a1;
- (char)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;

@end
