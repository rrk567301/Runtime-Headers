@class TLKGridLayoutManager, NSMapTable;

@interface SearchUIGridLayoutManager : NSObject

@property (retain, nonatomic) NSMapTable *tableMapping;
@property (retain, nonatomic) TLKGridLayoutManager *gridManager;
@property (nonatomic) BOOL isCompactTable;

+ (BOOL)shouldHideViewForRichData:(id)a0;
+ (id)alignmentsForSFHeaderRow:(id)a0;
+ (id)richTextForDataItems:(id)a0;
+ (id)richTextForRichDataItems:(id)a0;

- (void).cxx_destruct;
- (id)initWithHeaderSection:(id)a0 dataSections:(id)a1;
- (BOOL)computeCompactTableForSections:(id)a0;
- (id)tableRowForTableRowCardSection:(id)a0;

@end
