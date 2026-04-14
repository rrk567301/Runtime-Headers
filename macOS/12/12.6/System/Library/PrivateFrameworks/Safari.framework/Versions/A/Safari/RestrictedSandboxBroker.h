@class NSString, SafariSandboxBroker;

@interface RestrictedSandboxBroker : NSObject <SafariSandboxBrokerProtocol> {
    SafariSandboxBroker *_sandboxBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)relatedExtensionsForURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)changeUserWebSearchProviderInfoTo:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)issueDevelopModeExtensionWithCompletionHandler:(id /* block */)a0;
- (void)issueRootExtensionWithCompletionHandler:(id /* block */)a0;
- (void)getDownloadLocationURLWithCompletionHandler:(id /* block */)a0;
- (void)setShouldAlwaysPromptForDownloadPath:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)moveDownloadedFilesWithPaths:(id)a0 inDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)moveDownloadBundleWithIdentifierToTrash:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteUnusedDownloadBundleWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateFractionCompleted:(float)a0 forDownloadWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDownloadBundleURLForDownloadWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearDownloadIdentifiersNotIncludedIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeFileWrapperToUniqueFileInDownloadsFolder:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)synchronouslyRemoveQuarantineHardAttributeFromFileAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)extractArchiveAtPath:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelUnarchivingOperationWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)migrateResourcesToSandbox:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSandboxBroker:(id)a0;

@end
