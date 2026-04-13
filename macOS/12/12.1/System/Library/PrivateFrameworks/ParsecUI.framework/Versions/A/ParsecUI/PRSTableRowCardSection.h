@class NSString, PRSTableAlignmentSchema, NSArray;

@interface PRSTableRowCardSection : PRSCardSection

@property BOOL cardPaddingBottom;
@property BOOL cardPaddingTop;
@property BOOL reducedRowHeight;
@property BOOL canBeHidden;
@property long long verticalAlign;
@property (copy, nonatomic) NSString *tabGroupID;
@property (copy, nonatomic) NSString *tableID;
@property (retain, nonatomic) PRSTableAlignmentSchema *alignmentSchema;
@property (nonatomic) long long rowType;
@property (retain, nonatomic) NSArray *values;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;

@end
