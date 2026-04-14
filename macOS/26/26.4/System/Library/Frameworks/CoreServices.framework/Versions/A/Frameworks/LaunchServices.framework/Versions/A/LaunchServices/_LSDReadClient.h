@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id /* block */)a0;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRedactedPluginProxyForSystemAppexWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 platform:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)getSelectedDeveloperDirectoryURLWithCompletionHandler:(id /* block */)a0;
- (void)getPreferredAppMarketplacesWithCompletion:(id /* block */)a0;
- (void)getSystemContentStoreWithCompletionHandler:(id /* block */)a0;
- (void)getServerStoreNonBlockingWithCompletionHandler:(id /* block */)a0;
- (BOOL)_getRedactedPluginProxy:(id *)a0 appexRecord:(id *)a1 UUID:(id)a2 node:(id)a3 bundleIdentifier:(id)a4 platform:(unsigned int)a5 error:(id *)a6;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)getSettingsStoreConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)getRedactedAppexRecordForSystemAppexWithUUID:(id)a0 node:(id)a1 bundleIdentifier:(id)a2 platform:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)getPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)getApplicationCategoryIdentifiersSetWithCompletionHandler:(id /* block */)a0;
- (void)getServerStatusWithCompletionHandler:(id /* block */)a0;
- (void)mapBundleIdentifiers:(id)a0 orMachOUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)getSystemModeWithCompletionHandler:(id /* block */)a0;
- (void)getCurrentApplicationDefaultInfoForCategory:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)invokeServiceInvocation:(id)a0 isReply:(BOOL)a1;
- (void)getEligibilityAnswerForDomain:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;

@end
