@class NSColor, NSArray, NSTouchBarColorPickerSliderArtworkProvider;

@interface _NSTouchBarColorPickerSliderTrack : NSView {
    id _autounbinder;
}

@property (copy) NSColor *displayedColor;
@property (copy) NSArray *allowedColorSpaces;
@property (copy) NSTouchBarColorPickerSliderArtworkProvider *artworkProvider;
@property BOOL valueIsFlipped;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (oneway void)release;
- (id)_autounbinder;
- (BOOL)wantsLayer;

@end
