@interface WKPDFMenuTarget : NSObject {
    struct WeakObjCPtr<NSMenuItem> { id m_weakReference; } _selectedMenuItem;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct RetainPtr<NSMenuItem> { id x0; })selectedMenuItem;
- (void)contextMenuAction:(id)a0;

@end
