@class NSURL, SEMIndexSite, NSMutableDictionary;

@interface SEMIndexSiteCache : NSObject {
    NSURL *_rootDirectoryURL;
    SEMIndexSite *_defaultIndexSite;
    NSMutableDictionary *_userExIndexSites;
    BOOL _readOnly;
}

- (void).cxx_destruct;
- (void)clear;
- (id)initWithRootDirectoryURL:(id)a0 readOnly:(BOOL)a1;
- (void)_cacheIndexSite:(id)a0;
- (void)enumerateIndexSitesUsingBlock:(id /* block */)a0;
- (id)indexSiteAtURL:(id)a0 error:(id *)a1;
- (id)indexSiteWithUserId:(id)a0 error:(id *)a1;
- (BOOL)removeIndexSite:(id)a0 error:(id *)a1;

@end
