@class TLKGridLayoutManager, NSMapTable;

@interface SearchUIGridLayoutManager : NSObject

@property (retain, nonatomic) NSMapTable *tableMapping;
@property (retain, nonatomic) TLKGridLayoutManager *gridManager;
@property (nonatomic) char isCompactTable;

+ (id)alignmentsForSFHeaderRow:(id)a0;
+ (id)richTextForDataItems:(id)a0;
+ (id)richTextForRichDataItems:(id)a0;
+ (char)shouldHideViewForRichData:(id)a0;

- (void).cxx_destruct;
- (char)computeCompactTableForSections:(id)a0;
- (id)tableRowForTableRowCardSection:(id)a0;
- (id)initWithHeaderSection:(id)a0 dataSections:(id)a1;

@end
