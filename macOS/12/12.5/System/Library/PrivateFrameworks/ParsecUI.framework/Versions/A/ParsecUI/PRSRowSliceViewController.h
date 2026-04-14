@class PRSRowCardSection;

@interface PRSRowSliceViewController : PRSCardSectionSliceViewController {
    PRSRowCardSection *_rowCardSection;
}

@property (retain, nonatomic) PRSRowCardSection *rowCardSection;

- (void).cxx_destruct;
- (double)height;
- (void)awakeFromNib;
- (id)initWithRowCardSection:(id)a0;
- (void)syncAttributes;
- (id)rowSliceView;
- (BOOL)isGrayScale:(id)a0;

@end
