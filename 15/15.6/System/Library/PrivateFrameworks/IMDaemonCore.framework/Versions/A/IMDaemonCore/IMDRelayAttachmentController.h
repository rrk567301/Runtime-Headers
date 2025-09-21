@class IMDServiceSession, NSMutableDictionary, NSMutableSet;

@interface IMDRelayAttachmentController : NSObject

@property (retain, nonatomic) NSMutableDictionary *peerCompletionBlocks;
@property (retain, nonatomic) NSMutableSet *pendingRemoteFileRequests;
@property (readonly, nonatomic) IMDServiceSession *session;

- (void).cxx_destruct;
- (id)initWithSession:(id)a0;
- (id)_plainTextPartWithString:(id)a0 index:(long long)a1;
- (id)_existingStoredMessageWithCompletedTransfersForMessageGUID:(id)a0;
- (void)_sendFileURL:(id)a0 forMessageGUID:(id)a1 attachmentIndex:(long long)a2;
- (void)_sizeLimitsForTransfer:(id)a0 bigSize:(unsigned long long *)a1 smallSize:(unsigned long long *)a2;
- (void)processAttachmentsForMessage:(id)a0 generateTextParts:(char)a1 lastAddressedHandle:(id)a2 lastAddressedSIMID:(id)a3 completionBlock:(id /* block */)a4;
- (void)processAttachmentsForPeerRelayForMessage:(id)a0 lastAddressHandle:(id)a1 lastAddressedSIMID:(id)a2 completionBlock:(id /* block */)a3 uploadFailureBlock:(id /* block */)a4;
- (void)remoteFileResponse:(id)a0;
- (void)remotefileRequest:(id)a0 attempts:(long long)a1;
- (void)retrieveAttachmentsForMessage:(id)a0 ignoreStoredTransfers:(char)a1 displayID:(id)a2 token:(id)a3 completionBlock:(id /* block */)a4;
- (void)retrieveLocalFileTransfer:(id)a0 attachmentIndex:(unsigned long long)a1 path:(id)a2 requestURLString:(id)a3 ownerID:(id)a4 signature:(id)a5 decryptionKey:(id)a6 requestedSize:(id)a7 fileSize:(unsigned long long)a8 progressBlock:(id /* block */)a9 completionBlock:(id /* block */)a10;
- (char)shouldSendLowResolutionOnly;
- (long long)transcodeTargetType;

@end
