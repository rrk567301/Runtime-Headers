@class NSURL, NSMapTable;

@interface LSMDocMetadata : NSObject {
    NSURL *_databaseURL;
    NSMapTable *_dbConnections;
    long long _version;
}

- (void)dealloc;
- (BOOL)isComplete;
- (void)reset;
- (void)markComplete;
- (id)initWithDatabaseURL:(id)a0 error:(id *)a1;
- (BOOL)_createDB;
- (BOOL)_checkDBVersion;
- (long long)numOfDocs;
- (id)allFilePaths;
- (BOOL)addDocWithAttributes:(id)a0;
- (id)objectForAttribute:(id)a0 docID:(long long)a1;
- (id)allHelpbookIDs;
- (BOOL)addHelpbookID:(id)a0;
- (id)environmentProperties;
- (BOOL)setEnvironmentProperties:(id)a0;
- (void)releaseManagedObjectContextForCurrentThread;

@end
