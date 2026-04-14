@class NSString;

@interface WebAVRoutePickerViewHelper : NSObject <AVRoutePickerViewDelegate> {
    struct WeakPtr<WebCore::AVRoutePickerViewTargetPicker, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } m_callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCallback:(void *)a0;
- (void)clearCallback;
- (void)notificationHandler:(id)a0;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;

@end
