@class NSDictionary, NSArray;

@interface MMDelegatePluginManager : NSObject {
    BOOL _done;
    BOOL _succeeded;
    NSArray *_mbSetupPlugins;
}

@property (readonly) NSDictionary *delegatesResponseDict;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)invokeDelegatesWithAuthenticationResponse:(id)a0 account:(id)a1 accountStore:(id)a2 withDispatchGroup:(id)a3 context:(long long)a4 completion:(id /* block */)a5;
- (BOOL)_isPluginDisabledForID:(id)a0;
- (id)allPlugins;
- (id)readDelegatesRequestsForIdentifiers:(id)a0;
- (id)readDelegatesRequest;
- (id)filterDelegateRequest:(id)a0 forIdentifier:(id)a1;
- (id)pluginObjectForIdentifier:(id)a0;
- (id)collectAccountInformationFromDelegates;
- (id)gatherDelegatesRequestForACAccount:(id)a0;
- (void)updatePropertiesForAccount:(id)a0 accountStore:(id)a1 forIdentifier:(id)a2 completion:(id /* block */)a3;

@end
