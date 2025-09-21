@interface SPPreferenceManager : NSObject {
    void /* unknown type, empty encoding */ dynamicRules;
    void /* unknown type, empty encoding */ enabledRuleIdentifiers;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ matchingContext;
    void /* unknown type, empty encoding */ service;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ fastAccessFilter;
}

@property (class, nonatomic, readonly) SPPreferenceManager *shared;

- (id)disabledDomains;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginExtensionListener;
- (id)disabledContentTypes;
- (id)disabledFileProviderFilePaths;
- (id)disabledFileProviders;
- (id)disabledGroups;
- (void)fetchPreferencesWithRefetchRules:(BOOL)a0 completionHandler:(void (^)(void))a1;
- (void)migrateLegacyIfNeededWithDisabledGroups:(id)a0;
- (BOOL)needsLegacyMigration;
- (id)preferenceFilterQueries;
- (void)stopExtensionListener;

@end
