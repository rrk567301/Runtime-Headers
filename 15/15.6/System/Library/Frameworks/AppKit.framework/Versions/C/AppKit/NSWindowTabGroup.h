@class NSString, NSArray, NSWindow;

@interface NSWindowTabGroup : NSObject

@property (copy) NSString *identifier;
@property (getter=isTabBarEnabled) char tabBarEnabled;
@property char shouldShowTabBarWithOneItem;
@property (readonly, copy) NSArray *windows;
@property (getter=isOverviewVisible) char overviewVisible;
@property (readonly, getter=isTabBarVisible) char tabBarVisible;
@property (weak) NSWindow *selectedWindow;

- (id)init;
- (void).cxx_destruct;
- (id)plusTab;
- (void)addWindow:(id)a0;
- (id)initWithTabbingIdentifier:(id)a0;
- (void)insertWindow:(id)a0 atIndex:(long long)a1;
- (void)removeWindow:(id)a0;
- (void)setTabBarEnabled:(char)a0;

@end
