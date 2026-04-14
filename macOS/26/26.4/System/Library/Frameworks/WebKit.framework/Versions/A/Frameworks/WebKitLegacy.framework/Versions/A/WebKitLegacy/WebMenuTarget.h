@interface WebMenuTarget : NSObject {
    struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *m_ptr; } _menuController;
}

+ (id)sharedMenuTarget;

- (struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })menuController;
- (void)setMenuController:(struct NakedPtr<WebCore::ContextMenuController> { struct ContextMenuController *x0; })a0;
- (id).cxx_construct;
- (void)forwardContextMenuAction:(id)a0;

@end
