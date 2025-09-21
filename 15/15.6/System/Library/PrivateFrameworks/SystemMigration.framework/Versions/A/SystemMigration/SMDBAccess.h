@interface SMDBAccess : NSObject {
    int _state;
}

+ (id)localDB;
+ (int)databaseTypeAtPath:(id)a0;
+ (id)localODDB;
+ (id)rawODDBWithPath:(id)a0;
+ (id)remoteDBWithPath:(id)a0;
+ (id)remoteDSDBWithPath:(id)a0;

- (id)init;
- (int)state;
- (void)setState:(int)a0;
- (id)recordTypes;
- (void)closeDatabase;
- (id)entriesAtPath:(id)a0;
- (char)openDatabase;
- (char)addMemberRecord:(id)a0 ofType:(id)a1 atPath:(id)a2;
- (long long)addValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)createEntry:(id)a0 atPath:(id)a1 error:(id *)a2;
- (char)deleteEntryAtPath:(id)a0;
- (id)entryAtPath:(id)a0;
- (char)entryExistsAtPath:(id)a0;
- (char)insertValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)openDatabaseForWriting:(char)a0;
- (char)removeValue:(id)a0 forKey:(id)a1 atPath:(id)a2;
- (char)removeValuesForKey:(id)a0 atPath:(id)a1;
- (char)userIsASecureTokenHolder:(id)a0;

@end
