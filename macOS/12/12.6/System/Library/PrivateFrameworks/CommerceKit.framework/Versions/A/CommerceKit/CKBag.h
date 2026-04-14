@class CKStoreClient;

@interface CKBag : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;

+ (id)valueForKey:(id)a0;
+ (id)urlForKey:(id)a0;
+ (id)productionBag;
+ (id)sandboxBox;
+ (id)bagWithType:(unsigned long long)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (id)dictionary;
- (id)valueForKey:(id)a0;
- (id)urlForKey:(id)a0;
- (id)initWithStoreClient:(id)a0;
- (id)initWithBagType:(unsigned long long)a0;
- (BOOL)urlIsTrusted:(id)a0;
- (BOOL)regexWithKey:(id)a0 matchesString:(id)a1;
- (BOOL)sendGUIDWithURL:(id)a0;
- (id)storefrontURL;
- (id)loadBagAndObserveUpdatesWithHandler:(id /* block */)a0;
- (void)stopObservingBagWithObserver:(id)a0;
- (void)startUpdate;

@end
