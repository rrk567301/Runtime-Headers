@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)mapBundleIdentifiers:(id)a0 orMachOUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)willHandleInvocation:(id)a0 isReply:(BOOL)a1;
- (void)getServerStatusWithCompletionHandler:(id /* block */)a0;
- (void)getServerStoreWithCompletionHandler:(id /* block */)a0;
- (void)getServerStoreNonBlockingWithCompletionHandler:(id /* block */)a0;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPreferencesWithCompletionHandler:(id /* block */)a0;
- (void)getSelectedDeveloperDirectoryURLWithCompletionHandler:(id /* block */)a0;
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(id /* block */)a0;

@end
