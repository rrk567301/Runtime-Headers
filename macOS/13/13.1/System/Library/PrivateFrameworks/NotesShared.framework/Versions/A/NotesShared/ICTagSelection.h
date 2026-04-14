@class NSSet, NSArray, NSString, NSManagedObjectContext;

@interface ICTagSelection : ICFilterTypeSelection <NSCopying>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long tagOperator;
@property (nonatomic) BOOL allowsRecentlyDeleted;
@property (nonatomic) BOOL automaticallyRemoveDeletedTags;
@property (readonly, nonatomic) BOOL isNonEmpty;
@property (readonly, nonatomic) BOOL hasMultipleTagsSelected;
@property (retain, nonatomic) NSSet *includedObjectIDs;
@property (retain, nonatomic) NSSet *excludedObjectIDs;
@property (retain, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSArray *includedTags;
@property (readonly, nonatomic) NSArray *excludedTags;
@property (readonly, nonatomic) NSSet *objectIDs;
@property (readonly, nonatomic) NSArray *includedTagIdentifiers;
@property (readonly, nonatomic) NSArray *excludedTagIdentifiers;
@property (readonly, nonatomic) NSArray *tagIdentifiers;
@property (readonly, nonatomic) NSArray *includedDisplayTexts;
@property (readonly, nonatomic) NSArray *excludedDisplayTexts;
@property (readonly, nonatomic) NSArray *displayTexts;
@property (readonly, nonatomic) NSArray *includedHashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSArray *excludedHashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSArray *hashtagPrefixedDisplayTexts;
@property (readonly, nonatomic) NSSet *unresolvedTagIdentifiers;
@property (retain, nonatomic) NSSet *unresolvedIncludedTagIdentifiers;
@property (retain, nonatomic) NSSet *unresolvedExcludedTagIdentifiers;
@property (readonly, nonatomic) unsigned long long selectedTagCount;
@property (readonly, nonatomic) NSString *selectedTagCountString;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSString *smartFolderTitle;

+ (id)keyPathsForValuesAffectingIsValid;
+ (id)keyPathsForValuesAffectingIsNonEmpty;
+ (id)keyPathsForValuesAffectingObjectIDs;
+ (id)keyPathsForValuesAffectingSelectedTagCount;
+ (id)keyPathsForValuesAffectingIsEmpty;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (long long)filterType;
- (id)initWithManagedObjectContext:(id)a0;
- (id)filterName;
- (void)removeObjectIDs:(id)a0;
- (id)rawFilterValue;
- (id)emptySummaryTitle;
- (id)emptySummary;
- (id)shortEmptySummary;
- (void)managedObjectContextObjectIDsDidSave:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 mode:(unsigned long long)a1;
- (id)initWithManagedObjectContext:(id)a0 mode:(unsigned long long)a1 tagOperator:(unsigned long long)a2;
- (id)initWithManagedObjectContext:(id)a0 includedObjectIDs:(id)a1;
- (id)initWithManagedObjectContext:(id)a0 includedObjectIDs:(id)a1 excludedObjectIDs:(id)a2;
- (id)copyWithManagedObjectContext:(id)a0;
- (void)commonInitWithManagedObjectContext:(id)a0;
- (void)addObjectID:(id)a0 toExcluded:(BOOL)a1;
- (void)removeObjectID:(id)a0 fromExcluded:(BOOL)a1;
- (void)addUnresolvedTagIdentifier:(id)a0 toExcluded:(BOOL)a1;
- (void)removeUnresolvedTagIdentifier:(id)a0 fromExcluded:(BOOL)a1;
- (void)removeUnresolvedTagIdentifiers:(id)a0;
- (void)convertUnresolvedDisplayTextsInAccount:(id)a0;
- (BOOL)isEqualToTagSelection:(id)a0;
- (id)standardizedContentsForObjectIDs:(id)a0;
- (id)displayTextsForObjectIDs:(id)a0;
- (id)hashtagPrefixedDisplayTexts:(id)a0;
- (id)hashtagsForObjectIDs:(id)a0;

@end
