@class DPStatementCache;

@interface DPPictureStorage : NSObject {
    struct sqlite3 { } *_db;
    BOOL _creatingDatabase;
    DPStatementCache *_cache;
}

@property (readonly, nonatomic) DPStatementCache *cache;

+ (id)defaultPath;
+ (BOOL)hasOverridePath;
+ (id)marketingPath;
+ (BOOL)spacesSpansDisplays;
+ (void)updateDefaultPath;
+ (BOOL)updateOverridePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)cache;
- (void)closeDatabase;
- (id)allEntries;
- (void)_resetDatabase:(id)a0;
- (void)preferencesForDictionary:(id)a0 block:(id /* block */)a1;
- (struct sqlite3 { } *)_createDatabaseAtPath:(id)a0 error:(id)a1;
- (BOOL)_deleteDBSaveCorrupt:(BOOL)a0 oldDatabaseAtPath:(id)a1;
- (long long)addSpace:(id)a0 forDisplay:(id)a1 displayID:(unsigned int)a2 pictureID:(long long)a3;
- (void)addSpaceIfNecessary:(id)a0 forDisplay:(id)a1 displayID:(unsigned int)a2;
- (id)dictionaryForSpace:(id)a0 andDisplay:(id)a1 displayID:(unsigned int)a2 pictureID:(long long)a3;
- (void)insertNewDisplayIfNecessary:(id)a0 displayID:(unsigned int)a1;
- (long long)moveSpace:(id)a0 toDisplay:(id)a1 displayID:(unsigned int)a2 pictureID:(long long)a3;
- (long long)preferencesForSpace:(id)a0 andDisplay:(id)a1 displayID:(unsigned int)a2 pictureID:(long long)a3 block:(id /* block */)a4;
- (void)removeSpace:(id)a0;
- (long long)setDictionary:(id)a0 forDisplay:(id)a1 andSpace:(id)a2 displayID:(unsigned int)a3 updateKey:(int)a4 isDefault:(BOOL *)a5;
- (void)spaceBecameFirstForDisplay:(id)a0 display:(id)a1 displayID:(unsigned int)a2 pictureID:(long long)a3;

@end
