@class NSURL, NSObject;
@protocol MCMSQLiteDBCodeSigningPeerageDelegate, OS_dispatch_queue;

@interface MCMSQLiteDB : NSObject

@property (weak, nonatomic) id<MCMSQLiteDBCodeSigningPeerageDelegate> peerageDelegate;
@property (nonatomic) struct sqlite3 { } *db;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (char)moveDBWithURL:(id)a0 toURL:(id)a1 queue:(id)a2 error:(id *)a3;
+ (struct sqlite3 { } *)openDBWithURL:(id)a0 queue:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)closeDB;
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (char)_deleteCodeSigningWithIdentifier:(id)a0 error:(id *)a1;
- (char)_insertChildIdentifier:(id)a0 forParentIdentifier:(id)a1 error:(id *)a2;
- (char)_insertCodeSigningData:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (char)_insertCodeSigningInfo:(id)a0 forIdentifier:(id)a1 error:(id *)a2;
- (char)_performInsertOrUpdateQuery:(const char *)a0 withCodeSigningEntry:(id)a1 forIdentifier:(id)a2 isUpdate:(char)a3 error:(id *)a4;
- (char)_performSingleParameterQuery:(const char *)a0 withTextInput:(id)a1 error:(id *)a2;
- (char)_performSingleParameterQuery:(const char *)a0 withTextInput:(id)a1 expectedChanges:(int)a2 error:(id *)a3;
- (char)_performTwoParameterQuery:(const char *)a0 withTextInputOne:(id)a1 andTextInputTwo:(id)a2 expectedChanges:(int)a3 error:(id *)a4;
- (id)_selectCodeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (char)_sqliteExec:(id)a0 error:(id *)a1;
- (char)addCodeSigningEntry:(id)a0 withIdentifier:(id)a1 error:(id *)a2;
- (id)childIdentifiersForParentIdentifier:(id)a0 error:(id *)a1;
- (id)childParentMapWithError:(id *)a0;
- (id)codeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (char)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)a0;
- (char)deleteAllInvalidPluginCodeSigningEntriesWithNumChanges:(int *)a0 error:(id *)a1;
- (char)deleteCodeSigningEntryWithIdentifier:(id)a0 error:(id *)a1;
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(id /* block */)a0;
- (id)identifiersWithError:(id *)a0;
- (id)initWithURL:(id)a0 queue:(id)a1 error:(id *)a2;
- (char)invalidateCodeSigningForIdentifierAndAllChildren:(id)a0 error:(id *)a1;
- (char)invalidateCodeSigningWithIdentifier:(id)a0 error:(id *)a1;
- (id)parentIdentifierForChildIdentifier:(id)a0 error:(id *)a1;

@end
