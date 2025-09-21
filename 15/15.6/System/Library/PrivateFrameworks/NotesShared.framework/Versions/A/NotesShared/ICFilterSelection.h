@class NSSet, NSArray, NSString;

@interface ICFilterSelection : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSSet *cloudSpecificFilterTypes;

@property (readonly, nonatomic) NSArray *emptyFilterTypeSelections;
@property (readonly, nonatomic) NSArray *invalidFilterTypeSelectionCombinations;
@property (readonly, nonatomic) NSArray *incompatibleLockedNotesFilterTypeSelections;
@property (nonatomic) unsigned long long joinOperator;
@property (retain, nonatomic) NSArray *filterTypeSelections;
@property (nonatomic) char includeRecentlyDeleted;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) char hasEmptySelection;
@property (readonly, nonatomic) NSString *emptySummaryTitle;
@property (readonly, nonatomic) NSString *emptySummary;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) NSString *invalidSummaryTitle;
@property (readonly, nonatomic) NSString *invalidSummary;
@property (readonly, copy, nonatomic) NSString *primaryDateSummary;
@property (readonly, copy, nonatomic) NSString *secondaryDateSummary;
@property (readonly, copy, nonatomic) NSString *summaryWithJoinOperatorMenu;

+ (id)keyPathsForValuesAffectingHasEmptySelection;
+ (id)keyPathsForValuesAffectingIsEmpty;
+ (id)keyPathsForValuesAffectingIsValid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filterTypeSelectionForFilterType:(long long)a0;
- (id)initWithFilterTypeSelection:(id)a0;
- (id)initWithFilterTypeSelections:(id)a0 joinOperator:(unsigned long long)a1;
- (char)isEqualToICFilterSelection:(id)a0;
- (void)setSelection:(id)a0 forFilterType:(long long)a1;

@end
