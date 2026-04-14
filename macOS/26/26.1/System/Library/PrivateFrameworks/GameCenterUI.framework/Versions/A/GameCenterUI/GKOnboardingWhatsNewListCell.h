@class NSArray, NSImageView, NSTextField;

@interface GKOnboardingWhatsNewListCell : NSView

@property (retain, nonatomic) NSImageView *icon;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *subtitleLabel;
@property (retain, nonatomic) NSArray *normalConstraints;
@property (retain, nonatomic) NSArray *axConstraints;
@property (readonly, nonatomic) unsigned long long currentCellType;

- (void)loadView;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)createConstarints;
- (id)getIconImageFromBundle:(id)a0;
- (id)getIconImageFromSFSymbol:(id)a0;
- (void)setupCell;

@end
