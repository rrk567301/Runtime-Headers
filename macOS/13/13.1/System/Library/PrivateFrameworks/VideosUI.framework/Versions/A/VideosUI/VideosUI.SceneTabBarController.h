@class NSArray;

@interface VideosUI.SceneTabBarController : NSObject <VUITabBarProtocol> {
    void /* unknown type, empty encoding */ _tabBarInfo;
    void /* unknown type, empty encoding */ previousSelectedIndex;
}

@property (nonatomic, readonly) NSArray *tabBarItems;
@property (nonatomic) unsigned long long selectedIndex;

- (id)init;
- (void).cxx_destruct;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIndexFromDefaults:(BOOL)a1 appContext:(id)a2;

@end
