@class NSDictionary;

@interface AMSMetricsLoadURLOverlay : NSObject {
    id /* block */ _overlayProviderBlock;
}

@property (readonly, nonatomic) NSDictionary *overlayDictionary;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOverlayDictionary:(id)a0;
- (id)initWithOverlayProviderBlock:(id /* block */)a0;
- (id)loadURLEventOverlayDictionaryForContext:(id)a0;

@end
