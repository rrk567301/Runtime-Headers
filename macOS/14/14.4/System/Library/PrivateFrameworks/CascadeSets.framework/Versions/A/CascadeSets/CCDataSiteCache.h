@class NSURL, CCDataSite, NSMutableDictionary;

@interface CCDataSiteCache : NSObject {
    NSURL *_rootDirectoryURL;
    CCDataSite *_defaultDataSite;
    NSMutableDictionary *_userExDataSites;
    BOOL _readOnly;
}

- (void).cxx_destruct;
- (void)clear;
- (id)dataSiteAtURL:(id)a0 error:(id *)a1;
- (id)dataSiteWithUserId:(id)a0 error:(id *)a1;
- (BOOL)enumerateDataSites:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithRootDirectoryURL:(id)a0 readOnly:(BOOL)a1;
- (BOOL)removeDataSite:(id)a0 error:(id *)a1;
- (void)_cacheDataSite:(id)a0;

@end
