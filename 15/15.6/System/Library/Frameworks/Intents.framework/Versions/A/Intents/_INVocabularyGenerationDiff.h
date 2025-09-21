@class NSSet, NSArray, NSString;

@interface _INVocabularyGenerationDiff : NSObject

@property (copy, nonatomic) NSSet *deletedSiriIDs;
@property (copy, nonatomic) NSArray *updatedVocabularyItems;
@property (nonatomic) long long countOfVocabularyItemsAfterApplying;
@property (nonatomic) char isFullReset;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *appBundleID;

- (id)description;
- (void).cxx_destruct;
- (char)hasChanges;

@end
