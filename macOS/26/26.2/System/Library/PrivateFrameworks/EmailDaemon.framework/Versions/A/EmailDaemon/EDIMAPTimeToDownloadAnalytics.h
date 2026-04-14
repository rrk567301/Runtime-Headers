@interface EDIMAPTimeToDownloadAnalytics : NSObject <EDPersistenceDatabaseSchemaProvider> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ accountIdentifier;
    void /* unknown type, empty encoding */ runtimeStart;
}

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (void)didDownloadMessageOfSize:(long long)a0 dateReceived:(id)a1;
- (void)didStartDownloading;
- (void)didStopDownloadingIsComplete:(BOOL)a0;
- (id)initWithDatabase:(id)a0 accountIdentifier:(id)a1;

@end
