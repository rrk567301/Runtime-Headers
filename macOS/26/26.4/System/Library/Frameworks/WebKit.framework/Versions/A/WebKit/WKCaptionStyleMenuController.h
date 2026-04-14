@class NSString, NSMenu;
@protocol WKCaptionStyleMenuControllerDelegate;

@interface WKCaptionStyleMenuController : NSObject <NSMenuDelegate> {
    struct RetainPtr<NSMenu> { NSMenu *m_ptr; } _menu;
}

@property (copy, nonatomic) NSString *savedActiveProfileID;
@property (retain, nonatomic) NSMenu *menu;
@property (weak, nonatomic) id<WKCaptionStyleMenuControllerDelegate> delegate;
@property (readonly, nonatomic) NSMenu *captionStyleMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)menuController;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)dealloc;
- (BOOL)isAncestorOf:(id)a0;
- (BOOL)hasAncestor:(id)a0;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)profileMenuItemHighlighted:(id)a0;
- (void)profileMenuItemSelected:(id)a0;
- (void)rebuildMenu;
- (void)setPreviewProfileID:(id)a0;
- (void)systemCaptionStyleSettingsItemSelected:(id)a0;

@end
