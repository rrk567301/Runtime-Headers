@class CKStoreClient;

@interface CKBag : NSObject

@property (readonly, nonatomic) CKStoreClient *storeClient;

+ (id)valueForKey:(id)a0;
+ (id)urlForKey:(id)a0;
+ (id)bagWithType:(unsigned long long)a0;
+ (id)productionBag;
+ (id)sandboxBox;

- (char)isValid;
- (void).cxx_destruct;
- (id)dictionary;
- (id)valueForKey:(id)a0;
- (id)urlForKey:(id)a0;
- (id)initWithStoreClient:(id)a0;
- (id)initWithBagType:(unsigned long long)a0;
- (id)loadBagAndObserveUpdatesWithHandler:(id /* block */)a0;
- (char)regexWithKey:(id)a0 matchesString:(id)a1;
- (char)sendGUIDWithURL:(id)a0;
- (void)startUpdate;
- (void)stopObservingBagWithObserver:(id)a0;
- (id)storefrontURL;
- (char)urlIsTrusted:(id)a0;

@end
