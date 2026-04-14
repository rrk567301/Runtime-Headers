@class NSString;

@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>

@property (copy) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)attachmentsForParameters:(id)a0 withProgressHandler:(id /* block */)a1 withHandler:(id /* block */)a2;
- (void)teardownForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void)isExtensionEnhancedLoggingStateOnWithHandler:(id /* block */)a0;
- (void)attachmentListWithHandler:(id /* block */)a0;
- (void)collectionDidUpdateWithProgress:(id)a0;
- (BOOL)hasEntitlement;
- (void)setupForParameters:(id)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)updatedParametersWithExtensionFileNameFromParameters:(id)a0;
- (void)annotatedAttachmentsForParameters:(id)a0 withHandler:(id /* block */)a1;

@end
