@class NSArray, NSString, WBSCRDTPosition;

@interface WBMutableTabGroup : WBTabGroup <NSCopying>

@property (nonatomic) int identifier;
@property (copy, nonatomic) NSArray *deletedTabs;
@property (nonatomic) long long kind;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (copy, nonatomic) id /* block */ displayTitleProvider;
@property (copy, nonatomic) NSString *lastSelectedTabUUID;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSArray *mutableTabs;
@property (readonly, copy, nonatomic) NSArray *allMutableTabs;
@property (copy, nonatomic) NSString *title;

+ (id)privateTabGroup;
+ (id)localTabGroup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHidden:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)setIdentifier:(int)a0;
- (void)setKind:(long long)a0;
- (void)setDisplayTitleProvider:(id /* block */)a0;
- (void)markBackgroundImageAsModified;
- (void)removeTab:(id)a0;
- (void)clearTabs;
- (void)deleteTabs:(id)a0;
- (void)setLastSelectedTabUUID:(id)a0;
- (void)insertTabs:(id)a0 afterTab:(id)a1;
- (void)appendTabs:(id)a0;
- (void)setSyncable:(BOOL)a0;
- (void)setDeletedTabs:(id)a0;
- (id)mutableTabWithUUID:(id)a0;
- (void)reorderTab:(id)a0 afterTab:(id)a1;
- (void)clearDeletedTabs;
- (void)updateLastSelectedTab;
- (void)_fixLastSelectedTabIfNeeded;
- (void)truncateToNumberOfTabs:(unsigned long long)a0;
- (void)mergeWithTabGroup:(id)a0;

@end
