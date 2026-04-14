@interface SCTMenuBarVisibilityManager : NSObject

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_showMenu;
- (void)_showMenuNow;
- (void)_showMenuFail;
- (void)makeMenuBarVisible;

@end
