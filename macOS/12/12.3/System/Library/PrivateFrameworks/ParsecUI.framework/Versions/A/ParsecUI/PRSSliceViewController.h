@class PRSCardSection, SFPunchout;
@protocol PRSSliceViewControllerDelegate;

@interface PRSSliceViewController : NSViewController {
    double _additionalHeight;
}

@property (weak) id<PRSSliceViewControllerDelegate> delegate;
@property double viewWidth;
@property (nonatomic, getter=isUnderlined) BOOL underlined;
@property (nonatomic) BOOL undoUnderline;
@property (retain) SFPunchout *punchout;
@property (retain) PRSCardSection *cardSection;

+ (double)defaultHeight;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)height;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (double)imageWidth;
- (void)viewClosed;
- (void)setAdditionalHeight:(double)a0;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (void)setViewWidthFromTableView:(id)a0;
- (double)additionalHeight;

@end
