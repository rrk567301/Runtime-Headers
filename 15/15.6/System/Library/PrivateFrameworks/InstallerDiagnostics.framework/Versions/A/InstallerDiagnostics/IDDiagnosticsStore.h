@class NSMutableArray, NSMutableDictionary;

@interface IDDiagnosticsStore : NSObject

@property (retain) NSMutableArray *installEvents;
@property (retain) NSMutableDictionary *messages;

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (id)_compressData:(id)a0 forMessage:(long long)a1 error:(id *)a2;
- (id)storedMessages:(id)a0;
- (char)_containsUnfinishedInstall;
- (id)_decompressData:(id)a0 error:(id *)a1;
- (void)_resumeInstall;
- (char)_storeDataToNVRAMV1:(id)a0 error:(id *)a1;
- (char)_storeDataToNVRAMV2:(id)a0 error:(id *)a1;
- (char)_storeMessage:(long long)a0 toV2WithError:(id *)a1;
- (id)_storedNVRAMV1Data;
- (id)_storedNVRAMV2Data;
- (id)_unalteredStoredInstallEvents;
- (id)_unalteredStoredMessages;
- (char)clearSingleDiagnosticMessage:(long long)a0 error:(id *)a1;
- (char)clearStoredMessages:(id *)a0;
- (char)recordDiagnosticMessage:(long long)a0 withData:(id)a1 error:(id *)a2;
- (char)startNewInstall:(id *)a0;

@end
