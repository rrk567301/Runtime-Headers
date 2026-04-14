@class NSImageView, NSTextField;

@interface SMSelectSourceViewItem : NSCollectionViewItem

@property NSTextField *mainTextField;
@property NSImageView *mainImageView;
@property BOOL hideSelectedState;
@property (readonly) BOOL shouldDrawSelected;

+ (id)keyPathsForValuesAffectingShouldDrawSelected;

- (void)awakeFromNib;

@end
