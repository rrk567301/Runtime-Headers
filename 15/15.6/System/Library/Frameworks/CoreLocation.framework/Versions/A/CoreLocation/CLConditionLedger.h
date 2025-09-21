@class NSData, NSString, NSURL, NSArray, NSMutableDictionary, NSDictionary, NSFileManager, NSNumber;

@interface CLConditionLedger : NSObject {
    NSData *_encryptionKey;
    NSMutableDictionary *_recordTable;
    char _readSucceeded;
}

@property (readonly, getter=defaultFileManager) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *ledgerName;
@property (readonly, nonatomic) NSNumber *ledgerVersionNumber;
@property (readonly, nonatomic) NSURL *ledgerFile;
@property (readonly, getter=allMonitoringRecordsByIdentifier) NSDictionary *monitoredRecordsByIdentifier;
@property (readonly, getter=allMonitoringIdentifiers) NSArray *monitoredIdentifiers;

- (void)dealloc;
- (char)addRecordForMonitoring:(id)a0 identifier:(id)a1 persist:(char)a2;
- (void)deleteLedgerFile;
- (char)directoryExists:(id)a0;
- (id)initWithStoreType:(long long)a0 domain:(long long)a1 monitorConfiguration:(id)a2;
- (id)monitoringRecordForIdentifier:(id)a0;
- (void)performMigration;
- (char)persistentFileReadSucceeded;
- (char)readConditionsFromFile;
- (char)removeRecordFromMonitoringWithIdentifier:(id)a0;
- (void)setLedgerForType:(long long)a0 domain:(long long)a1 monitor:(id)a2 client:(id)a3 path:(id)a4;
- (void)setLedgerVersionNumber:(int)a0;
- (char)shouldMigrate;
- (void)updateEvent:(id)a0 forIdentifier:(id)a1;
- (void)updateRecord:(id)a0 identifier:(id)a1;
- (char)writeToFile;

@end
