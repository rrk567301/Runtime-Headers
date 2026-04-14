@class NSString, WKWebsiteDataStore;

@interface PurgeableWebCache : NSObject <PurgeableItem> {
    WKWebsiteDataStore *_websiteDataStore;
}

@property (nonatomic) unsigned long long purgeOrder;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)purgeAndGetSize:(unsigned long long *)a0;
- (id)initWithApplicationCacheDirectoryPath:(id)a0 networkCacheDirectoryPath:(id)a1 purgeOrder:(unsigned long long)a2;
- (id)_purgeableWebsiteDataTypes;

@end
