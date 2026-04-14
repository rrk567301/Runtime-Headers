@class NSMutableArray, NSMutableDictionary;

@interface IDDiagnosticsStore : NSObject

@property (retain) NSMutableArray *installEvents;
@property (retain) NSMutableDictionary *messages;

+ (id)defaultStore;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_storeMessage:(long long)a0 toV2WithError:(id *)a1;
- (BOOL)recordDiagnosticMessage:(long long)a0 withData:(id)a1 error:(id *)a2;
- (id)storedMessages:(id)a0;
- (BOOL)clearSingleDiagnosticMessage:(long long)a0 error:(id *)a1;
- (BOOL)clearStoredMessages:(id *)a0;
- (BOOL)startNewInstall:(id *)a0;
- (id)_unalteredStoredInstallEvents;
- (id)_unalteredStoredMessages;
- (BOOL)_containsUnfinishedInstall;
- (void)_resumeInstall;
- (BOOL)_storeDataToNVRAMV1:(id)a0 error:(id *)a1;
- (id)_storedNVRAMV1Data;
- (BOOL)_storeDataToNVRAMV2:(id)a0 error:(id *)a1;
- (id)_storedNVRAMV2Data;
- (id)_compressData:(id)a0 forMessage:(long long)a1 error:(id *)a2;
- (id)_decompressData:(id)a0 error:(id *)a1;

@end
