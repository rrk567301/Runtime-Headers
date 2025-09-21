@class ODSession, ODNode, NSURL;

@interface SMODDBAccess : SMDBAccess {
    ODSession *_session;
    NSURL *_path;
    long long accessCount;
}

@property (retain) ODNode *node;

+ (id)sharedQueue;
+ (id)sharedDBToPathMap;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (char)replaceUserRecord:(id)a0 withRecord:(id)a1 attributes:(id)a2 password:(id)a3 options:(unsigned int)a4 error:(id *)a5;
- (id)recordTypes;
- (void)closeDatabase;
- (id)entriesAtPath:(id)a0;
- (char)addMemberRecord:(id)a0 ofType:(id)a1 atPath:(id)a2;
- (long long)addValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)createEntry:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)createEntry:(id)a0 atPath:(id)a1 mergeAttributes:(id)a2 error:(id *)a3;
- (char)deleteEntryAtPath:(id)a0;
- (char)enableSecureTokenForUser:(id)a0 withPassword:(id)a1 andDiskPassword:(id)a2 returningError:(id *)a3;
- (id)entryAtPath:(id)a0;
- (char)entryExistsAtPath:(id)a0;
- (char)establishCredentialsForSecureTokenWithName:(id)a0 password:(id)a1 error:(id *)a2;
- (char)insertValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)openDatabaseForWriting:(char)a0;
- (void)removeEmptyAttributes:(id)a0;
- (char)removeValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)removeValuesForKey:(id)a0 atPath:(id)a1;
- (char)setPassword:(id)a0 forUser:(id)a1 error:(id *)a2;
- (char)setRequirePasswordResetOnNextLoginForUser:(id)a0 error:(id *)a1;
- (char)userIsASecureTokenHolder:(id)a0;
- (char)validatePassword:(id)a0 againstSecureTokenForUser:(id)a1;

@end
