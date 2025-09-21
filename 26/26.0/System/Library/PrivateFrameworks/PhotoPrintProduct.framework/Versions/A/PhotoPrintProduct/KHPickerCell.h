@class NSTextField, NSString, NSImage, NSTrackingArea, KHSelectableImageView, NSNumber;
@protocol KHPickerCellDelegate;

@interface KHPickerCell : UXCollectionViewCell <NSAccessibilityCheckBox>

@property (retain) NSTrackingArea *trackingArea;
@property (retain) NSTextField *titleView;
@property (retain) NSNumber *isAccessibilityChecked;
@property (weak) id<KHPickerCellDelegate> delegate;
@property (retain) KHSelectableImageView *imageView;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)accessibilityValue;
- (void)updateTrackingAreas;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)setAccessibilitySelected:(BOOL)a0;

@end
