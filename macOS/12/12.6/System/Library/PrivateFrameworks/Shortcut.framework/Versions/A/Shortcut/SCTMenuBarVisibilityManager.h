@interface SCTMenuBarVisibilityManager : NSObject

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_showMenu;
- (void)makeMenuBarVisible;
- (void)_showMenuNow;
- (void)_showMenuFail;

@end
