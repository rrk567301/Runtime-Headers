@interface WebMenuTarget : NSObject {
    struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *m_ptr; } _menuController;
}

+ (id)sharedMenuTarget;

- (struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })menuController;
- (id).cxx_construct;
- (void)setMenuController:(struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })a0;
- (void)forwardContextMenuAction:(id)a0;

@end
