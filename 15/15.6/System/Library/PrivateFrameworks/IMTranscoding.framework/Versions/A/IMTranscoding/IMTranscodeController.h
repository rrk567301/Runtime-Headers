@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface IMTranscodeController : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)_connect;
- (void)_disconnected;
- (void)generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 balloonBundleID:(id)a4 transferGUID:(id)a5 completionBlock:(id /* block */)a6 blockUntilReply:(char)a7;
- (void)generateSafeRender:(id)a0 completionBlock:(id /* block */)a1;
- (void)generateSafeRender:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1 completionBlock:(id /* block */)a2;
- (void)replaceTransferWithSafeTransfer:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1 completionBlock:(id /* block */)a2;
- (void)transcodeFallbackFileTransferContents:(id)a0 utiType:(id)a1 allowUnfilteredUTIs:(id)a2 target:(long long)a3 sizes:(id)a4 commonCapabilities:(id)a5 maxDimension:(unsigned long long)a6 transcoderUserInfo:(id)a7 representations:(long long)a8 isLQMEnabled:(char)a9 completionBlock:(id /* block */)a10;
- (void)transcodeFallbackFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 completionBlock:(id /* block */)a3;
- (void)transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(char)a2 allowUnfilteredUTIs:(id)a3 target:(long long)a4 sizes:(id)a5 commonCapabilities:(id)a6 maxDimension:(unsigned long long)a7 transcoderUserInfo:(id)a8 representations:(long long)a9 isLQMEnabled:(char)a10 completionBlock:(id /* block */)a11;
- (void)transcodeLocalTransferPayloadData:(id)a0 balloonBundleID:(id)a1 completionBlock:(id /* block */)a2;
- (void)generateSnapshotForMessageGUID:(id)a0 payloadURL:(id)a1 balloonBundleID:(id)a2 senderContext:(id)a3 completionBlock:(id /* block */)a4;
- (void)transcribeAudioForAudioTransferURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)_decodeiMessageAppPayload:(id)a0 senderContext:(id)a1 bundleID:(id)a2 retries:(unsigned long long)a3 completionBlock:(id /* block */)a4 blockUntilReply:(char)a5;
- (void)_generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 retries:(unsigned long long)a4 completionBlock:(id /* block */)a5 blockUntilReply:(char)a6;
- (void)_generatePreview:(id)a0 previewURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 retries:(unsigned long long)a4 balloonBundleID:(id)a5 transferGUID:(id)a6 completionBlock:(id /* block */)a7 blockUntilReply:(char)a8;
- (void)_generateSafeRender:(id)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a1 retries:(int)a2 completionBlock:(id /* block */)a3;
- (void)_insertSandboxExtensionIntoXPCMessage:(id)a0 withKey:(id)a1 forFileURL:(id)a2 readOnly:(char)a3;
- (void)_transcodeFileTransferContents:(id)a0 utiType:(id)a1 isSticker:(char)a2 allowUnfilteredUTIs:(id)a3 target:(long long)a4 sizes:(id)a5 commonCapabilities:(id)a6 maxDimension:(unsigned long long)a7 transcoderUserInfo:(id)a8 representations:(long long)a9 fallBack:(char)a10 retries:(int)a11 isLQMEnabled:(char)a12 completionBlock:(id /* block */)a13;
- (void)_transcodeFileTransferPayloadData:(id)a0 balloonBundleID:(id)a1 attachments:(id)a2 retries:(unsigned long long)a3 fallBack:(char)a4 completionBlock:(id /* block */)a5;
- (void)decodeiMessageAppPayload:(id)a0 senderContext:(id)a1 bundleID:(id)a2 completionBlock:(id /* block */)a3 blockUntilReply:(char)a4;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 completionBlock:(id /* block */)a4;
- (void)generateMetadata:(id)a0 metadataURL:(id)a1 senderContext:(id)a2 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; char x3; char x4; char x5; })a3 completionBlock:(id /* block */)a4 blockUntilReply:(char)a5;

@end
