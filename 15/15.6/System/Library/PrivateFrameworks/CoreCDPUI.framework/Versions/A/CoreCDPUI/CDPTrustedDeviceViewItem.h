@class NSImageView, NSTextField;

@interface CDPTrustedDeviceViewItem : NSCollectionViewItem

@property NSTextField *mainTextField;
@property NSTextField *subTextField;
@property NSImageView *mainImageView;
@property char hideSelectedState;
@property (readonly) char shouldDrawSelected;

+ (id)keyPathsForValuesAffectingShouldDrawSelected;

- (void)awakeFromNib;

@end
