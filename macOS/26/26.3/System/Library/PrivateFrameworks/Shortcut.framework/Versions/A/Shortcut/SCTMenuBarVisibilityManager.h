@interface SCTMenuBarVisibilityManager : NSObject

@property (retain, nonatomic) id delegate;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)_showMenu;
- (void)_showMenuNow;
- (void)_showMenuFail;
- (void)makeMenuBarVisible;

@end
