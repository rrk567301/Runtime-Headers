@interface APConfigurationStorefrontValidator : NSObject {
    void /* unknown type, empty encoding */ storefront;
    void /* unknown type, empty encoding */ configurationPath;
    void /* unknown type, empty encoding */ $__lazy_storage_$_url;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)configurationNeedsReset;
- (id)initWithStorefront:(id)a0 configurationPath:(id)a1;
- (void)saveStorefront;

@end
