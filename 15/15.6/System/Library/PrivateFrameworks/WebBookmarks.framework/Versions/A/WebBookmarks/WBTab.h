@class NSString, NSURL, NSArray, WebBookmark, NSDictionary, WBSCopyOnWriteValue, WBLocalTabAttributes, WBSCRDTPosition;

@interface WBTab : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable, WBSCloudTabItem> {
    WBSCopyOnWriteValue *_bookmarkStorage;
    id _cachedURL;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) int parentIdentifier;
@property (readonly, nonatomic, getter=wasModified) char modified;
@property (readonly, nonatomic, getter=wasAdded) char added;
@property (readonly, nonatomic, getter=wasMoved) char moved;
@property (readonly, nonatomic, getter=_isMutable) char isMutable;
@property (readonly, nonatomic) int orderIndex;
@property (readonly, nonatomic, getter=isInserted) char inserted;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) WBLocalTabAttributes *localAttributes;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic, getter=isInUnnamedTabGroup) char inUnnamedTabGroup;
@property (readonly, nonatomic) double lastViewedTime;
@property (readonly, nonatomic, getter=isPrivateBrowsing) char privateBrowsing;
@property (readonly, nonatomic, getter=isShared) char shared;
@property (readonly, nonatomic, getter=isSyncable) char syncable;
@property (readonly, copy, nonatomic) NSString *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char isBlank;
@property (readonly, nonatomic) char isMarkedAsRead;
@property (readonly, copy, nonatomic) NSURL *syncableURL;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic) char canSetPinned;
@property (readonly, nonatomic, getter=isPinned) char pinned;
@property (readonly, copy, nonatomic) NSString *pinnedTitle;
@property (readonly, copy, nonatomic) NSURL *pinnedURL;
@property (readonly, copy, nonatomic) NSString *debugSyncDescription;
@property (retain, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) char needsSecureDelete;
@property (readonly, copy, nonatomic) NSDictionary *modifiedSettingsFieldsByName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
@property (readonly, nonatomic, getter=isShowingReader) char showingReader;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) char matchedLastSearch;

+ (id)startPageTabWithDeviceIdentifier:(id)a0;
+ (id)pinnedTabWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)isIdentical:(id)a0;
- (id)duplicate;
- (id)initWithBookmark:(id)a0;
- (char)hasSameUUIDAndURLAsTab:(id)a0;
- (char)canCloseAutomaticallyForInterval:(double)a0;
- (id)initWithTitle:(id)a0 url:(id)a1 deviceIdentifier:(id)a2;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1;
- (id)initWithUUID:(id)a0 deviceIdentifier:(id)a1 lastVisitTime:(id)a2;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 pinned:(char)a3 pinnedTitle:(id)a4 pinnedURL:(id)a5 localAttributes:(id)a6 deviceIdentifier:(id)a7;
- (id)mutableDuplicate;
- (id)_addressFromURL:(id)a0;
- (id)_determineURL;
- (void)_setLocalURLString:(id)a0;
- (void)_updateBookmarkWithURL:(id)a0 shouldSync:(char)a1;
- (id)duplicatePreservingUUID;
- (id)initWithBookmark:(id)a0 isPrivateBrowsing:(char)a1;
- (id)initWithBookmarkStorage:(id)a0;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3 isPrivateBrowsing:(char)a4;
- (id)initWithUUID:(id)a0 title:(id)a1 url:(id)a2 deviceIdentifier:(id)a3 lastVisitTime:(id)a4;

@end
