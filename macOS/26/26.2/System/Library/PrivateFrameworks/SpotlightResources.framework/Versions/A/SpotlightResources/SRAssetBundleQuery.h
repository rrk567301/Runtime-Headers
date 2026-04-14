@class NSMutableDictionary;

@interface SRAssetBundleQuery : NSObject

@property (readonly, nonatomic) NSMutableDictionary *queryEntries;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)xpcObject;
- (id)init;
- (void)addQueryEntriesForLanguage:(id)a0 assetType:(id)a1 deliveryTypes:(id)a2;
- (void)enumerateEntriesForLanguage:(id)a0 block:(id /* block */)a1;
- (id)initWithXPCObject:(id)a0 isResult:(BOOL)a1;

@end
