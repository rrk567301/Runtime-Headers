@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>

- (void)unregisterBundleUnit:(unsigned int)a0 options:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)updateRecordForApp:(id)a0 withSINF:(id)a1 iTunesMetadata:(id)a2 placeholderMetadata:(id)a3 sendNotification:(int)a4 operationUUID:(id)a5 returnSaveToken:(BOOL)a6 completionHandler:(id /* block */)a7;
- (BOOL)clientIsEntitledForEmbeddedRegistrationOperations;
- (void)garbageCollectDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)setPreferredAppMarketplaces:(id)a0 completion:(id /* block */)a1;
- (void)setDatabaseIsSeeded:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)performPostInstallationRegistration:(id)a0 personaUniqueStrings:(id)a1 operationUUID:(id)a2 reply:(id /* block */)a3;
- (void)requestLSDExitSafely:(double)a0 completionHandler:(id /* block */)a1;
- (BOOL)clientHasMIEntitlement:(id)a0;
- (void)updateContainerUnit:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (void)resetServerStoreWithCompletionHandler:(id /* block */)a0;
- (BOOL)canRegisterContainer;
- (void)registerExtensionPoint:(id)a0 platform:(unsigned int)a1 declaringURL:(id)a2 withInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeAllHandlerPrefsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceSaveForTestingWithCompletion:(id /* block */)a0;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)removeDatabaseStoreOnNextOpportunity:(id /* block */)a0;
- (void)setHandler:(id)a0 version:(struct LSVersionNumber { unsigned char x0[32]; })a1 forURLScheme:(id)a2 completionHandler:(id /* block */)a3;
- (void)performPostUninstallationUnregistrationOfBundleID:(id)a0 operationUUID:(id)a1 unregisterType:(unsigned int)a2 precondition:(id)a3 reply:(id /* block */)a4;
- (void)unregisterExtensionPoint:(id)a0 platform:(unsigned int)a1 withVersion:(id)a2 parentBundleUnit:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (BOOL)_canRegisterOrUnregisterURL:(id)a0 withOptions:(unsigned int)a1;
- (BOOL)canRegisterURL:(id)a0 withOptions:(unsigned int)a1;
- (void)removeHandlerForURLScheme:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)canUnregisterWithOptions:(unsigned int)a0;
- (void)registerSelf;
- (void)synchronizeWithMobileInstallation;
- (void)setPreferenceValueForCallingApplication:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)performUpdateOfPersonasOfBundleIDs:(id)a0 toPersonaUniqueStrings:(id)a1 operationUUID:(id)a2 reply:(id /* block */)a3;
- (void)removeHandlerForContentType:(id)a0 roles:(unsigned int)a1 completionHandler:(id /* block */)a2;
- (void)removeContainer:(unsigned int)a0;
- (void)registerItemInfo:(id)a0 alias:(id)a1 diskImageAlias:(id)a2 bundleURL:(id)a3 installationPlist:(id)a4 completionHandler:(id /* block */)a5;
- (void)setHandler:(id)a0 version:(struct LSVersionNumber { unsigned char x0[32]; })a1 roles:(unsigned int)a2 forContentType:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeAllHandlersWithCompletionHandler:(id /* block */)a0;
- (void)setPreferenceValue:(id)a0 forKey:(id)a1 forApplicationAtURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerContainerURL:(id)a0 completionHandler:(id /* block */)a1;

@end
