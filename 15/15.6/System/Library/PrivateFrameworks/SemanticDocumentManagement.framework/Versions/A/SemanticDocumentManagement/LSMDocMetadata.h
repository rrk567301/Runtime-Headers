@class NSURL, NSMapTable;

@interface LSMDocMetadata : NSObject {
    NSURL *_databaseURL;
    NSMapTable *_dbConnections;
    long long _version;
}

- (void)dealloc;
- (char)isComplete;
- (void)reset;
- (void)markComplete;
- (char)_checkDBVersion;
- (char)_createDB;
- (char)addDocWithAttributes:(id)a0;
- (char)addHelpbookID:(id)a0;
- (id)allFilePaths;
- (id)allHelpbookIDs;
- (id)environmentProperties;
- (id)initWithDatabaseURL:(id)a0 error:(id *)a1;
- (long long)numOfDocs;
- (id)objectForAttribute:(id)a0 docID:(long long)a1;
- (void)releaseManagedObjectContextForCurrentThread;
- (char)setEnvironmentProperties:(id)a0;

@end
