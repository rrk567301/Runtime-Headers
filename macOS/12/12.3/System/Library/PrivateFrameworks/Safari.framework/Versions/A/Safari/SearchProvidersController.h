@class NSArray, NSString, NSDictionary, SearchProvider;

@interface SearchProvidersController : NSObject <WBSSearchProviderContext> {
    SearchProvider *_defaultProvider;
    NSArray *_providers;
}

@property (retain, nonatomic) SearchProvider *defaultProvider;
@property (readonly, nonatomic) NSArray *providerList;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *systemLanguage;
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues;
@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (struct URLRequest { struct WKRetainPtr<const void *> { void *x0; } x0; })redirectToSafeSearchIfNeeded:(const void *)a0;
+ (id)_internetServicesRegion;

- (id)init;
- (void).cxx_destruct;
- (BOOL)urlIsValidSearch:(id)a0;
- (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
- (id)initAndSendProvidersToWebKit:(BOOL)a0;
- (void)_loadAllProviders;
- (void)_sendAllProvidersToWebKit;
- (void)_getAllProviders:(id *)a0 userVisibleProviders:(id *)a1 newDefaultProvider:(id *)a2;
- (void)_setDefaultProvider:(id)a0;
- (void)_sortProviders;
- (void)_setSystemDefaultProvider:(id)a0;
- (id)providerFromIdentifier:(id)a0;
- (void)reloadDefaultProviderIfNecessary;

@end
