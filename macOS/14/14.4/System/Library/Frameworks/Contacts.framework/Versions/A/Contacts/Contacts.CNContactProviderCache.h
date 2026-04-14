@class _TtC8Contacts22CNContactProviderCache, NSArray;

@interface Contacts.CNContactProviderCache : NSObject {
    void /* unknown type, empty encoding */ appExtensionIdentityByBundleIdentifierCache;
    void /* unknown type, empty encoding */ appExtensionIdentityCache;
    void /* unknown type, empty encoding */ containerByBundleIdentifierCache;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) _TtC8Contacts22CNContactProviderCache *sharedCache;

@property (nonatomic, readonly) NSArray *cachedBundleIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;

@end
