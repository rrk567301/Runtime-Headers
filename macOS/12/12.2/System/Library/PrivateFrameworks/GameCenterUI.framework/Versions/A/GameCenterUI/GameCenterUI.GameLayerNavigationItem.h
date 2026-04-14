@class NSString;

@interface GameCenterUI.GameLayerNavigationItem : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) void /* unknown type, empty encoding */ hideBackButton;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 hideBackButton:(BOOL)a2;

@end
