@class NSDictionary, NSArray;

@interface MMDelegatePluginManager : NSObject {
    char _done;
    char _succeeded;
    NSArray *_mbSetupPlugins;
}

@property (readonly) NSDictionary *delegatesResponseDict;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (char)_isPluginDisabledForID:(id)a0;
- (id)allPlugins;
- (id)collectAccountInformationFromDelegates;
- (id)filterDelegateRequest:(id)a0 forIdentifier:(id)a1;
- (id)gatherDelegatesRequestForACAccount:(id)a0;
- (void)invokeDelegatesWithAuthenticationResponse:(id)a0 account:(id)a1 accountStore:(id)a2 withDispatchGroup:(id)a3 context:(long long)a4 completion:(id /* block */)a5;
- (id)pluginObjectForIdentifier:(id)a0;
- (id)readDelegatesRequest;
- (id)readDelegatesRequestsForIdentifiers:(id)a0;
- (void)updatePropertiesForAccount:(id)a0 accountStore:(id)a1 forIdentifier:(id)a2 completion:(id /* block */)a3;

@end
