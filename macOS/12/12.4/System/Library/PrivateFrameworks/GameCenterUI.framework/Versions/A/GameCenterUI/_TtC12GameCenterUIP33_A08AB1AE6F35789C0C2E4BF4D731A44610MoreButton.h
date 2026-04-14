@interface _TtC12GameCenterUIP33_A08AB1AE6F35789C0C2E4BF4D731A44610MoreButton : GameCenterUI.ClickableView <NSMenuDelegate> {
    void /* unknown type, empty encoding */ ellipsisLayer;
    void /* unknown type, empty encoding */ buttonMask;
    void /* unknown type, empty encoding */ reportFriendActionBlock;
    void /* unknown type, empty encoding */ removeFriendActionBlock;
    void /* unknown type, empty encoding */ activeMenu;
}

@property (nonatomic, copy) id /* block */ reportFriendActionBlock;
@property (nonatomic, copy) id /* block */ removeFriendActionBlock;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)menuDidClose:(id)a0;
- (void)showContextMenu;

@end
