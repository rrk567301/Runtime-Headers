@class SEMIndexSiteCache, SEMSettings;

@interface SEMIndexSiteReadAccess : NSObject <SEMSkitAccessProvider, SEMFTSAccessProvider> {
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
}

+ (char)_isFileNotFoundError:(id)a0;
+ (id)defaultSharedInstance;

- (void).cxx_destruct;
- (void)reset;
- (id)accessDescription;
- (id)ftsDatabaseReadAccessWithIndexSiteType:(unsigned char)a0;
- (id)initWithIndexSiteCache:(id)a0 settings:(id)a1;
- (char)setEntityPool:(id)a0 error:(id *)a1;
- (id)skitReadAccessWithIndexSiteType:(unsigned char)a0;
- (char)supportsIndexSiteType:(unsigned char)a0;

@end
