@class NSColor, _NSTouchBarColorPickerSwatch, NSImageView;

@interface _NSTouchBarColorPickerDoubleTapButton : NSView {
    _NSTouchBarColorPickerSwatch *_swatchView;
    NSImageView *_armedImageView;
    NSImageView *_successImageView;
    long long _state;
}

@property (copy) NSColor *color;
@property (copy) id /* block */ actionHandler;
@property BOOL prearmed;

- (void)setState:(long long)a0;
- (void)highlight:(BOOL)a0;
- (long long)state;
- (void)dealloc;
- (void)fallback;
- (long long)_defaultState;
- (id)declaredLayoutConstraints;
- (void)engage;
- (void)handlePress:(id)a0;
- (id)initWithArmedImage:(id)a0 successImage:(id)a1;
- (void)setFallbackTimer;
- (void)unsetFallbackTimer;
- (void)updateSubviewsForState;

@end
