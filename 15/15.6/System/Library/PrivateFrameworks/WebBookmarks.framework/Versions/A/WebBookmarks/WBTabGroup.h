@class NSString, NSArray, NSURL, WebBookmark, NSSet, NSDictionary, NSMutableDictionary, WBTab, NSMutableArray, WBSCopyOnWriteValue, WBSCRDTPosition;

@interface WBTabGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable> {
    NSMutableArray *_deletedTabs;
    NSMutableDictionary *_tabsByUUID;
    WBSCopyOnWriteValue *_bookmarkStorage;
    id /* block */ _displayTitleProvider;
    NSArray *_cachedUnpinnedTabs;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) id /* block */ displayTitleProvider;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic, getter=isInserted) char inserted;
@property (nonatomic) long long kind;
@property (readonly, nonatomic, getter=isHidden) char hidden;
@property (readonly, nonatomic, getter=_isMutable) char isMutable;
@property (readonly, nonatomic, getter=_tabClass) Class tabClass;
@property (readonly, copy, nonatomic) NSArray *overflowRemoteTabs;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) char hasDynamicTitle;
@property (readonly, copy, nonatomic) NSString *lastSelectedTabUUID;
@property (readonly, nonatomic, getter=isLocal) char local;
@property (readonly, nonatomic, getter=isUnnamed) char unnamed;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSURL *representativeURL;
@property (readonly, nonatomic, getter=isPrivateBrowsing) char privateBrowsing;
@property (readonly, copy, nonatomic) NSString *serverID;
@property (readonly, nonatomic, getter=isSyncable) char syncable;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic, getter=isShared) char shared;
@property (readonly, nonatomic, getter=isNamed) char named;
@property (readonly, nonatomic) char usesGlobalPinnedTabs;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, copy, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, copy, nonatomic) NSSet *emptyTabsUUIDSet;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) WBTab *lastPinnedTab;
@property (readonly, nonatomic) WBTab *firstUnpinnedTab;
@property (readonly, nonatomic) WBTab *pinnedStartPage;
@property (readonly, copy, nonatomic) NSArray *unpinnedTabs;
@property (readonly, nonatomic) char supportsTabGroupFavorites;
@property (readonly, nonatomic) char supportsDeviceTabs;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly, nonatomic, getter=isInDefaultProfile) char inDefaultProfile;
@property (readonly, copy, nonatomic) NSString *debugSyncDescription;
@property (readonly, copy, nonatomic) NSString *debugRecursiveSyncDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) char needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)isIdentical:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1;
- (void)detectDuplicatedTabs;
- (id)tabWithUUID:(id)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isMutable:(char)a1;
- (void)_tabsDidChange;
- (void)_updateTabLookupTable;
- (char)hasSameKindAsTabGroup:(id)a0;
- (id)initWithBookmark:(id)a0 lastSelectedTabUUID:(id)a1;
- (id)initWithBookmark:(id)a0 lastSelectedTabUUID:(id)a1 kind:(long long)a2;
- (id)initWithBookmarkStorage:(id)a0 lastSelectedTabUUID:(id)a1 kind:(long long)a2;
- (id)initWithTitle:(id)a0 uuid:(id)a1 deviceIdentifier:(id)a2;
- (char)isTabPinnable:(id)a0;
- (id)lastPinnedTabExcluding:(id)a0;
- (char)tabsAreIdentical:(id)a0;

@end
