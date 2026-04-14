@class PRSRowCardSection;

@interface PRSRowSliceViewController : PRSCardSectionSliceViewController {
    PRSRowCardSection *_rowCardSection;
}

@property (retain, nonatomic) PRSRowCardSection *rowCardSection;

- (void).cxx_destruct;
- (double)height;
- (void)awakeFromNib;
- (id)initWithRowCardSection:(id)a0;
- (BOOL)isGrayScale:(id)a0;
- (id)rowSliceView;
- (void)syncAttributes;

@end
