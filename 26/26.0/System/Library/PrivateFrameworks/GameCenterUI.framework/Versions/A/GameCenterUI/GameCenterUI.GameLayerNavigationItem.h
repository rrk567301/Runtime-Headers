@class NSString, _TtC12GameCenterUI16NavigationButton;

@interface GameCenterUI.GameLayerNavigationItem : NSObject {
    void /* function */ title;
    void /* function */ subtitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) BOOL hideBackButton;
@property (nonatomic, retain) _TtC12GameCenterUI16NavigationButton *rightBarButtonItem;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 hideBackButton:(BOOL)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 hideBackButton:(BOOL)a2 rightBarButtonItem:(id)a3;

@end
