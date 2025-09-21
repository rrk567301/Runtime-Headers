@class NSString, NSPredicate;

@interface ICQueryObjC : NSObject {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) long long minimumSupportedVersion;
@property (nonatomic, readonly) char canBeEdited;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)objc_queryForCallNotesAllowsRecentlyDeleted:(char)a0;
+ (id)objc_queryForMathNotesAllowsRecentlyDeleted:(char)a0;
+ (id)objc_queryForNonDeletedNotes;
+ (id)objc_queryForNotesMatchingFilterSelection:(id)a0;
+ (id)objc_queryForNotesMatchingTagSelection:(id)a0;
+ (id)objc_queryForPinnedNotes:(char)a0 allowsRecentlyDeleted:(char)a1;
+ (id)objc_queryForRecentlyDeletedMathNotes;
+ (id)objc_queryForSharedNotes:(char)a0 allowsRecentlyDeleted:(char)a1;
+ (id)objc_queryForSystemPaperNotesAllowsRecentlyDeleted:(char)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filterSelectionWithManagedObjectContext:(id)a0 account:(id)a1;
- (id)removingTagIdentifier:(id)a0;
- (id)replacingTagIdentifier:(id)a0 withNewTagIdentifier:(id)a1;
- (id)tagSelectionWithManagedObjectContext:(id)a0;

@end
