@class NSString, WKPopoverColorWell;

@interface WKColorPopoverMac : NSObject <WKColorPickerUIMac, WKPopoverColorWellDelegate, NSWindowDelegate> {
    BOOL _lastChangedByUser;
    struct WeakPtr<WebKit::WebColorPickerMac, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } _picker;
    struct RetainPtr<WKPopoverColorWell> { WKPopoverColorWell *m_ptr; } _popoverWell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowWillClose:(id)a0;
- (void)invalidate;
- (id).cxx_construct;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (void)didChooseColor:(id)a0;
- (void)didClosePopover;
- (id)initWithFrame:(const struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } *)a0 inView:(id)a1;
- (void)setAndShowPicker:(void *)a0 withColor:(id)a1 supportsAlpha:(BOOL)a2 suggestions:(void *)a3;

@end
