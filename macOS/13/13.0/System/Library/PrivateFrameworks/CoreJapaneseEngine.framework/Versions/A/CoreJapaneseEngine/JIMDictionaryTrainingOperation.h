@class JIMDictionaryTrainer;

@interface JIMDictionaryTrainingOperation : NSOperation {
    unsigned long long _processedFileID;
    long long _processedRecordNumber;
    long long _processedTokenCount;
    double _timeoutInterval;
}

@property (weak) JIMDictionaryTrainer *parentTrainer;

- (id)init;
- (void).cxx_destruct;
- (void)main;
- (id)_myMailAddresses;
- (BOOL)_processRecordInfo:(id)a0;
- (id)_tokenArrayFromTokenData:(id)a0;
- (void)_prepareEnvironment;
- (void)_finalizeEnvironment;
- (void)_checkAddress:(id)a0 andAddAliases:(id)a1 to:(id)a2;

@end
