@class NSArray, NSString, NSDictionary, SearchProvider;
@protocol WBSSearchProvider;

@interface SearchProvidersController : NSObject <WBSSearchProviderContext> {
    SearchProvider *_defaultProvider;
    SearchProvider *_privateProvider;
    NSArray *_providers;
}

@property (readonly, nonatomic) BOOL hasCustomProviderForPrivateBrowsing;
@property (readonly, nonatomic) NSArray *providerList;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *systemLanguage;
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly, nonatomic) id<WBSSearchProvider> defaultSearchProvider;
@property (readonly, nonatomic) id<WBSSearchProvider> defaultSeachProviderForPrivateBrowsing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)_internetServicesRegion;
+ (struct URLRequest { struct WKRetainPtr<const void *> { void *x0; } x0; })redirectToSafeSearchIfNeeded:(const void *)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)urlIsValidSearch:(id)a0;
- (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
- (void)_getAllProviders:(id *)a0 userVisibleProviders:(id *)a1 newDefaultProvider:(id *)a2 newPrivateProvider:(id *)a3;
- (void)_loadAllProviders;
- (void)_sendAllProvidersToWebKit;
- (void)_setDefaultProvider:(id)a0 forPrivateBrowsing:(BOOL)a1 ephemeral:(BOOL)a2;
- (void)_setSystemDefaultProvider:(id)a0;
- (void)_sortProviders;
- (id)defaultProviderForPrivateBrowsing:(BOOL)a0;
- (id)initAndSendProvidersToWebKit:(BOOL)a0;
- (id)providerFromIdentifier:(id)a0;
- (void)reloadDefaultProviderIfNecessary;
- (void)setDefaultProvider:(id)a0 forPrivateBrowsing:(BOOL)a1;

@end
