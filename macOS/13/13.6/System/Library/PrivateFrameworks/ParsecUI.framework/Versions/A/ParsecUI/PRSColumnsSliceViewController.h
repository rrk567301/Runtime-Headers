@class PRSTextColumnsCardSection;

@interface PRSColumnsSliceViewController : PRSCardSectionSliceViewController {
    long long columnCount;
}

@property (retain, nonatomic) PRSTextColumnsCardSection *textColumnsCardSection;

- (id)init;
- (double)height;
- (unsigned long long)columnCount;
- (void)awakeFromNib;
- (id)titleTextField;
- (id)initWithTextColumnsCardSection:(id)a0;
- (id)_attributesForFont:(id)a0 color:(id)a1;
- (id)_attributesForWeight:(int)a0;
- (id)attributedStringForColumnSections:(id)a0 columnCount:(unsigned long long)a1;
- (id)columnTextFieldAtIndex:(unsigned long long)a0;
- (id)columnsSliceView;
- (id)initWithCardSection:(id)a0 nibName:(id)a1;
- (void)syncAttributes;

@end
