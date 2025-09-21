@class NSImageView, NSTextField;

@interface AKTrustedDeviceViewItem : NSCollectionViewItem

@property (nonatomic) NSTextField *mainTextField;
@property (nonatomic) NSTextField *subTextField;
@property (nonatomic) NSImageView *mainImageView;
@property (nonatomic) char hideSelectedState;
@property (readonly, nonatomic) char shouldDrawSelected;

+ (id)keyPathsForValuesAffectingShouldDrawSelected;

- (void)awakeFromNib;

@end
