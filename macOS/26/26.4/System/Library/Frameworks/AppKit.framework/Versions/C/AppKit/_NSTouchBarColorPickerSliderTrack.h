@class NSColor, NSArray, NSTouchBarColorPickerSliderArtworkProvider;

@interface _NSTouchBarColorPickerSliderTrack : NSView {
    id _autounbinder;
}

@property (copy) NSColor *displayedColor;
@property (copy) NSArray *allowedColorSpaces;
@property (copy) NSTouchBarColorPickerSliderArtworkProvider *artworkProvider;
@property BOOL valueIsFlipped;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (oneway void)release;
- (void)dealloc;
- (id)_autounbinder;
- (BOOL)wantsLayer;

@end
