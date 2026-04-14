@class WBTabGroup, NSString, NSDictionary, WBMutableTabGroup, NSDate, WebBookmark;

@interface WBWindow : NSObject

@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) int identifier;
@property (retain, nonatomic) WBTabGroup *activeTabGroup;
@property (retain, nonatomic) NSDate *dateClosed;
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, nonatomic) WBMutableTabGroup *localTabGroup;
@property (readonly, nonatomic) WBMutableTabGroup *privateTabGroup;
@property (copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSDictionary *tabGroupsToActiveTabs;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (readonly, nonatomic) BOOL isFavoritesBarHidden;
@property (readonly, nonatomic) BOOL isMinimized;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL prefersSidebarVisible;
@property (readonly, nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) BOOL isTabBarHidden;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowContentRect;
@property (readonly, nonatomic) unsigned long long selectedPinnedTabIndex;
@property (readonly, nonatomic) unsigned long long unifiedSidebarMode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)initWithBookmark:(id)a0;
- (void)removeAllActiveTabUUIDs;
- (void)setActiveTabUUID:(id)a0 forTabGroupWithUUID:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 localTabGroup:(id)a1 privateTabGroup:(id)a2;
- (id)activeTabUUIDForTabGroupWithUUID:(id)a0;
- (id)initWithUUID:(id)a0 sceneID:(id)a1;
- (void)removeActiveTabUUIDForTabGroupWithUUID:(id)a0;
- (id)initWithUUID:(id)a0 activeTabGroup:(id)a1 localTabGroup:(id)a2 privateTabGroup:(id)a3 sceneID:(id)a4;
- (id)initWithBookmark:(id)a0 activeTabGroup:(id)a1 localTabGroup:(id)a2 privateTabGroup:(id)a3;
- (void)_updateExtraAttributesUsingBlock:(id /* block */)a0;
- (void)updateActiveTabGroup;

@end
