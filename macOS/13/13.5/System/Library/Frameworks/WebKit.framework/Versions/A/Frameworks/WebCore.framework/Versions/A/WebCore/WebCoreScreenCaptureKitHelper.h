@class NSString;

@interface WebCoreScreenCaptureKitHelper : NSObject <SCStreamDelegate, SCContentSharingSessionProtocol, SCStreamOutput> {
    struct WeakPtr<WebCore::ScreenCaptureKitCaptureSource, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)disconnect;
- (id)initWithCallback:(void *)a0;
- (void)pickerCanceledForSession:(id)a0;
- (void)sessionDidChangeContent:(id)a0;
- (void)sessionDidEnd:(id)a0;
- (void)stream:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 ofType:(long long)a2;
- (void)stream:(id)a0 didStopWithError:(id)a1;

@end
