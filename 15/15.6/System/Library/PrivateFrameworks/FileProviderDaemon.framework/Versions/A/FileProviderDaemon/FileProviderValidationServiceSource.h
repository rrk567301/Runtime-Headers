@class NSString, NSFileProviderExtension, NSOperationQueue, NSHashTable;

@interface FileProviderValidationServiceSource : NSObject <NSXPCListenerDelegate, NSFileProviderValidationServiceV1, NSFileProviderServiceSource> {
    NSFileProviderExtension *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic, getter=isRestricted) char restricted;

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)makeListenerEndpointAndReturnError:(id *)a0;
- (id)initWithFileProviderExtension:(id)a0 itemIdentifier:(id)a1;
- (void)validation_allowValidation:(id /* block */)a0;
- (void)validation_evictDocumentWithCompletionHandler:(id /* block */)a0;
- (void)validation_shareDocumentWithCompletionHandler:(id /* block */)a0;

@end
