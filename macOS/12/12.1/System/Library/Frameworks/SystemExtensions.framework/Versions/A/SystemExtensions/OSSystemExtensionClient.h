@interface OSSystemExtensionClient : NSObject

- (BOOL)willReplaceAppAtURL:(id)a0 with:(id)a1 error:(id *)a2;
- (BOOL)willDeleteAppAtURL:(id)a0 error:(id *)a1;
- (unsigned long long)shouldDeleteAppAtURL:(id)a0;
- (unsigned long long)shouldMoveAppToTrash:(id)a0;
- (unsigned long long)shouldMoveAppAtURL:(id)a0 toURL:(id)a1;
- (unsigned long long)shouldReplaceAppAtURL:(id)a0 with:(id)a1;
- (id)listAllExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listActiveExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listEnabledExtensionsWithCategory:(id)a0 error:(id *)a1;
- (id)listPendingApprovalExtensionsWithCategory:(id)a0 error:(id *)a1;
- (BOOL)testing__routine:(id)a0 withAuthorization:(struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (BOOL)willMoveAppToTrash:(id)a0 error:(id *)a1;
- (id)listAllExtensions:(id *)a0;
- (id)listActiveExtensions:(id *)a0;
- (id)listEnabledExtensions:(id *)a0;
- (id)listPendingApprovalExtensions:(id *)a0;
- (BOOL)uninstallExtension:(id)a0 withAuthorization:(const struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;
- (id)updateExtensions:(id)a0;
- (BOOL)resetExtensionDatabase:(struct AuthorizationOpaqueRef { } *)a0 error:(id *)a1;
- (BOOL)testing__routine:(id)a0 error:(id *)a1;
- (BOOL)willMoveAppAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)developerMode:(BOOL *)a0 error:(id *)a1;
- (BOOL)setDeveloperMode:(BOOL)a0 withAuthorization:(const struct AuthorizationOpaqueRef { } *)a1 error:(id *)a2;

@end
