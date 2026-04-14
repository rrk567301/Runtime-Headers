@class NSImageView, NSTextField;

@interface AKTrustedDeviceViewItem : NSCollectionViewItem

@property NSTextField *mainTextField;
@property NSTextField *subTextField;
@property NSImageView *mainImageView;
@property BOOL hideSelectedState;
@property (readonly) BOOL shouldDrawSelected;

+ (id)keyPathsForValuesAffectingShouldDrawSelected;

- (void)awakeFromNib;

@end
