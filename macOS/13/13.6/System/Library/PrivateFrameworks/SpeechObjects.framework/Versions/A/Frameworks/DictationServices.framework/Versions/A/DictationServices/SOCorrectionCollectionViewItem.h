@class NSLayoutConstraint;

@interface SOCorrectionCollectionViewItem : NSCollectionViewItem

@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;

+ (id)identifier;

- (void)loadView;
- (void)setTextLabelXOffset:(double)a0;

@end
