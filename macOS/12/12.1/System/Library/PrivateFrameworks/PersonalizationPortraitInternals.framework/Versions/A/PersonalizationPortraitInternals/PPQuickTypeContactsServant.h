@class NSCache, PPLocalContactStore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalContactStore *_localContactStore;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned char)a0;
- (void)clearCaches;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;

@end
