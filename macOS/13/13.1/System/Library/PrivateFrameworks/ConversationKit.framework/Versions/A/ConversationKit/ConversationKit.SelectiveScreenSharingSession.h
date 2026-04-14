@interface ConversationKit.SelectiveScreenSharingSession : NSObject <SLSharingSessionManagerDelegate, SCContentSharingSessionManagerProtocol> {
    void /* unknown type, empty encoding */ sessionDidCreateNewSession;
    void /* unknown type, empty encoding */ sessionDidBegin;
    void /* unknown type, empty encoding */ sessionDidEnd;
    void /* unknown type, empty encoding */ sessionDidChangeAttributes;
    void /* unknown type, empty encoding */ sessionDidChangeContent;
    void /* unknown type, empty encoding */ sessionPickerCanceled;
    void /* unknown type, empty encoding */ skylightSharingSession;
    void /* unknown type, empty encoding */ screenCaptureSharingSession;
    void /* unknown type, empty encoding */ screenCaptureKitEnabled;
}

- (void)sharingSessionManager:(id)a0 sessionDidBegin:(id)a1;
- (void)sharingSessionManager:(id)a0 sessionDidEnd:(id)a1;
- (void)sharingSessionManager:(id)a0 sessionDidChangeContent:(id)a1;
- (void)sharingSessionManager:(id)a0 sessionDidChangeMetaData:(id)a1;
- (void)sharingSessionManager:(id)a0 pickerCanceledForSession:(id)a1;
- (void)sessionDidEnd:(id)a0;
- (void)sessionDidChangeContent:(id)a0;
- (void)pickerCanceledForSession:(id)a0;
- (void)sessionDidBegin:(id)a0;
- (void)sessionDidChangeMetadata:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
