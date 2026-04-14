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

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (double)height;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (double)imageWidth;
- (void)viewClosed;
- (double)additionalHeight;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (void)setAdditionalHeight:(double)a0;
- (void)setViewWidthFromTableView:(id)a0;

@end
