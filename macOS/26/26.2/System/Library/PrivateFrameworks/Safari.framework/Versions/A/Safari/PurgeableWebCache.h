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

- (void).cxx_destruct;
- (void)dealloc;
- (id)_purgeableWebsiteDataTypes;
- (id)initWithNetworkCacheDirectoryPath:(id)a0 purgeOrder:(unsigned long long)a1;
- (BOOL)purgeAndGetSize:(unsigned long long *)a0;

@end
