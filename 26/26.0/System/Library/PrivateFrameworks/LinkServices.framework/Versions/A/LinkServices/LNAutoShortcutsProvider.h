@class NSString, NSXPCConnection;
@protocol LNAutoShortcutsProviderInterface;

@interface LNAutoShortcutsProvider : NSObject <LNAutoShortcutsProviderInterface> {
    NSXPCConnection *_connection;
    id<LNAutoShortcutsProviderInterface> _directAccess;
    id<LNAutoShortcutsProviderInterface> _xpcAccess;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)autoShortcutsForBundleIdentifier:(id)a0 localeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)retrieveActionForLocalizedPhrase:(id)a0 completion:(id /* block */)a1;
- (id)initWithOptions:(long long)a0;
- (id)autoShortcutsForApplicationRecord:(id)a0 localeIdentifier:(id)a1;
- (void)autoShortcutsForLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)retrieveActionForBundleIdentifier:(id)a0 appShortcutIdentifier:(id)a1 parameterIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)propertiesForIdentifiers:(id)a0 error:(id *)a1;
- (void)retrieveActionForBundleIdentifier:(id)a0 basePhraseTemplate:(id)a1 actionIdentifier:(id)a2 parameterIdentifier:(id)a3 completion:(id /* block */)a4;
- (id)autoShortcutsForLocaleIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
