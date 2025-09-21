@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (nonatomic) char isInitialSync;

- (id)dataContentType;
- (void)applyAdditionalPropertiesFromPutTask:(id)a0;
- (id)copyGetTaskWithURL:(id)a0;
- (id)copyMultiGetTaskWithURLs:(id)a0;
- (Class)bulkChangeTaskClass;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 context:(id)a4 accountInfoProvider:(id)a5 taskManager:(id)a6 appSpecificDataItemClass:(Class)a7;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 syncItemOrder:(char)a4 context:(id)a5 accountInfoProvider:(id)a6 taskManager:(id)a7 appSpecificDataItemClass:(Class)a8;

@end
