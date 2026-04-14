@class NSURL, NSMapTable;

@interface LSMDocMetadata : NSObject {
    NSURL *_databaseURL;
    NSMapTable *_dbConnections;
    long long _version;
}

- (BOOL)isComplete;
- (void)dealloc;
- (void)reset;
- (void)markComplete;
- (id)initWithDatabaseURL:(id)a0 error:(id *)a1;
- (BOOL)_checkDBVersion;
- (BOOL)_createDB;
- (BOOL)addDocWithAttributes:(id)a0;
- (BOOL)addHelpbookID:(id)a0;
- (id)allFilePaths;
- (id)allHelpbookIDs;
- (id)environmentProperties;
- (long long)numOfDocs;
- (id)objectForAttribute:(id)a0 docID:(long long)a1;
- (void)releaseManagedObjectContextForCurrentThread;
- (BOOL)setEnvironmentProperties:(id)a0;

@end
