@class NSString, NSArray, NSURL, NSSet, WebBookmark, NSDictionary, WBTab, NSMutableArray, WBSCRDTPosition;

@interface WBTabGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable> {
    NSMutableArray *_tabs;
    NSArray *_overflowRemoteTabs;
    id /* block */ _displayTitleProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSMutableArray *deletedTabs;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, copy, nonatomic) id /* block */ displayTitleProvider;
@property (readonly, copy, nonatomic) NSString *lastSelectedTabUUID;
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, copy, nonatomic) NSURL *representativeURL;
@property (readonly, nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, copy, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) NSArray *allTabs;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) WBTab *lastPinnedTab;
@property (readonly, nonatomic) BOOL supportsTabGroupFavorites;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isIdentical:(id)a0;
- (id)initWithDeviceIdentifier:(id)a0;
- (id)initWithBookmark:(id)a0;
- (id)tabWithUUID:(id)a0;
- (id)initWithTitle:(id)a0 deviceIdentifier:(id)a1;
- (void)detectDuplicatedTabs;
- (id)initWithTitle:(id)a0 uuid:(id)a1 deviceIdentifier:(id)a2;
- (id)initWithBookmark:(id)a0 tabs:(id)a1 lastSelectedTabUUID:(id)a2;
- (id)initWithBookmark:(id)a0 tabs:(id)a1 lastSelectedTabUUID:(id)a2 kind:(long long)a3;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isMutable:(BOOL)a1;
- (id)overflowRemoteTabs;
- (BOOL)hasSameKindAsTabGroup:(id)a0;
- (BOOL)tabsAreIdentical:(id)a0;

@end
