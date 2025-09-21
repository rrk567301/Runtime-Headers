@class ISStoreIndex, NSString, ISStore, NSURL;

@interface ISIconCache : NSObject

@property (readonly) unsigned long long sandboxToken;
@property (readonly) ISStoreIndex *storeIndex;
@property (readonly) ISStore *store;
@property (readonly) NSString *cachePath;
@property (readonly) NSURL *cacheURL;

+ (id)defaultIconCache;

- (void)clear;
- (void)dealloc;
- (id)initWithURL:(id)a0 storeIndex:(id)a1 sandboxExtensionToken:(unsigned long long)a2;
- (BOOL)findStoreUnitForIcon:(id)a0 descriptor:(id)a1 UUID:(id *)a2 validationToken:(id *)a3;
- (id)storeUnitForUUID:(id)a0;
- (id)description;
- (id)cachePath;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
