@interface GameStoreKit.ShelfContextMenu : NSObject <NSMenuDelegate> {
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ actionRunner;
    void /* unknown type, empty encoding */ onMenuOpen;
    void /* unknown type, empty encoding */ onMenuClose;
}

- (void).cxx_destruct;
- (id)init;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;

@end
