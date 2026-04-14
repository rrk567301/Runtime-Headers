@class NSCache, PPLocalContactStore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalContactStore *_localContactStore;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
}

- (void)clearCaches;
- (id)initWithOptions:(unsigned char)a0;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (void).cxx_destruct;

@end
