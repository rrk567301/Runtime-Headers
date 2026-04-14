@interface _LSTrustedSignatureDatabase : NSObject {
    struct sqlite3 { } *_db;
}

+ (id)sharedDatabaseWithError:(id *)a0;
+ (void)scheduleDatabaseTrimming;
+ (struct sqlite3 { } *)openOrCreateDatabaseWithError:(id *)a0;
+ (void)trimDatabase;

- (BOOL)addTrustedSignature:(id)a0 forURL:(id)a1 error:(id *)a2;
- (BOOL)removeTrustedSignature:(id)a0 forURL:(id)a1 error:(id *)a2;
- (id)isTrustedSignatureKnown:(id)a0 error:(id *)a1;
- (void)updateTimestampForTrustedSignature:(id)a0;
- (id)initWithError:(id *)a0;

@end
