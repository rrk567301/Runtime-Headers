@class NSMutableArray, NSMutableDictionary;

@interface IDDiagnosticsStore : NSObject

@property (retain) NSMutableArray *installEvents;
@property (retain) NSMutableDictionary *messages;

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (id)_unalteredStoredMessages;
- (id)storedMessages:(id)a0;
- (id)_unalteredStoredInstallEvents;
- (BOOL)clearStoredMessages:(id *)a0;
- (id)_compressData:(id)a0 forMessage:(long long)a1 error:(id *)a2;
- (BOOL)_storeDataToNVRAMV2:(id)a0 error:(id *)a1;
- (BOOL)_storeMessage:(long long)a0 toV2WithError:(id *)a1;
- (BOOL)_storeDataToNVRAMV1:(id)a0 error:(id *)a1;
- (BOOL)_containsUnfinishedInstall;
- (void)_resumeInstall;
- (BOOL)recordDiagnosticMessage:(long long)a0 withData:(id)a1 error:(id *)a2;
- (BOOL)clearSingleDiagnosticMessage:(long long)a0 error:(id *)a1;
- (BOOL)startNewInstall:(id *)a0;
- (id)_storedNVRAMV2Data;
- (id)_decompressData:(id)a0 error:(id *)a1;
- (id)_storedNVRAMV1Data;

@end
