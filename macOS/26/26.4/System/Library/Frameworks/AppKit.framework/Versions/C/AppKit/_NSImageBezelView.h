@class NSImageView;

@interface _NSImageBezelView : NSView

@property (weak, nonatomic) NSImageView *_ownerView;

- (void)updateLayer;
- (void).cxx_destruct;
- (BOOL)allowsVibrancy;
- (id)_vibrancyFilter;
- (id)_ownerViewCell;
- (id)initWithOwnerView:(id)a0;

@end
