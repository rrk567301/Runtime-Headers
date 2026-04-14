@class NSArray;

@interface PRSTextColumnsCardSection : PRSCardSection

@property (readonly, nonatomic) int title_weight;
@property (readonly, nonatomic) NSArray *columns;
@property (readonly, nonatomic) int data_alignment;
@property BOOL alignmentRequired;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithColumns:(id)a0 data_alignment:(long long)a1;
- (id)initWithSFSearchResult:(id)a0 cardSection:(id)a1;
- (id)initWithTitle:(id)a0 weight:(int)a1 columns:(id)a2;

@end
