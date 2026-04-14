@class VCPersistentDataStore, NSString;

@interface VCRemoteDataCollectionDumpProducer : NSObject {
    VCPersistentDataStore *_dataStore;
    struct sqlite3 { } *_database;
    NSString *_databasePath;
}

- (void)dealloc;
- (id)initWithDataStore:(id)a0;
- (void)submitToCoreAnalytics:(id)a0;
- (id)newHeaderString;
- (void)coreAnalyticsCallback:(id)a0 fileHandle:(id)a1;
- (void)createDumpAndSubmitToCoreAnalytics;
- (BOOL)disableRemoteDataCollection;
- (void)removeDatabaseFile;
- (void)runPostProcessing:(id)a0;
- (BOOL)writeVCRCMLDumpToCSVPath:(id)a0;

@end
