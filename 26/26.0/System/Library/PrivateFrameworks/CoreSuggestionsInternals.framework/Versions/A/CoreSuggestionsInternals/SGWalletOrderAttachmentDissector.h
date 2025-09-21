@class NSString;

@interface SGWalletOrderAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)_dissectMessage:(id)a0 entity:(id)a1;
- (BOOL)shouldIgnoreEntity:(id)a0;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)_downloadWalletOrderAttachmentsFrom:(id)a0;
- (id)_enrichmentsForWalletOrderDictionary:(id)a0 orderData:(id)a1 parentMessage:(id)a2 parentEntity:(id)a3;
- (BOOL)orderAttachmentsCompletelyDownloaded:(id)a0;

@end
