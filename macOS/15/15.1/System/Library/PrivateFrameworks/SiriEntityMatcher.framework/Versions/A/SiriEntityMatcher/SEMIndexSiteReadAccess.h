@class SEMSettings, NSMutableDictionary, SEMIndexSiteCache, NSObject;
@protocol OS_dispatch_queue;

@interface SEMIndexSiteReadAccess : NSObject <SEMSkitAccessProvider, SEMFTSAccessProvider> {
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_skitAccessCache;
    NSMutableDictionary *_databaseAccessCache;
}

+ (BOOL)_isFileNotFoundError:(id)a0;
+ (id)defaultSharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)supportsMultiUser;
- (id)accessDescription;
- (id)ftsDatabaseReadAccessWithUserId:(id)a0;
- (id)initWithRootDirectoryURL:(id)a0 settings:(id)a1;
- (BOOL)setEntityPool:(id)a0 error:(id *)a1;
- (id)skitReadAccessWithUserId:(id)a0;

@end
