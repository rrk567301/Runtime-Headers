@class PRSTVRowCardSection;

@interface PRSTVRowSliceViewController : PRSCardSectionSliceViewController {
    PRSTVRowCardSection *_rowCardSection;
}

@property (retain, nonatomic) PRSTVRowCardSection *rowCardSection;

- (void).cxx_destruct;
- (double)height;
- (void)awakeFromNib;
- (double)imageWidth;
- (id)initWithRowCardSection:(id)a0;
- (id)rowSliceView;
- (void)syncAttributes;

@end
