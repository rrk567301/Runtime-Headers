@class SEMIndexSiteCache, SEMSettings;

@interface SEMIndexSiteReadAccess : NSObject <SEMSkitAccessProvider, SEMFTSAccessProvider, SEMVectorDatabaseAccessProvider> {
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
}

+ (BOOL)_isFileNotFoundError:(id)a0;
+ (id)defaultSharedInstance;

- (void)reset;
- (void).cxx_destruct;
- (id)accessDescription;
- (id)ftsDatabaseReadAccessWithIndexSiteType:(unsigned char)a0;
- (id)initWithIndexSiteCache:(id)a0 settings:(id)a1;
- (BOOL)setEntityPool:(id)a0 error:(id *)a1;
- (id)skitReadAccessWithIndexSiteType:(unsigned char)a0;
- (BOOL)supportsIndexSiteType:(unsigned char)a0;
- (id)vectorDbReadAccessWithIndexSiteType:(unsigned char)a0 embeddingType:(char)a1;

@end
