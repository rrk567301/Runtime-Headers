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

- (void)dealloc;
- (long long)state;
- (void)setState:(long long)a0;
- (id)declaredLayoutConstraints;
- (void)highlight:(BOOL)a0;
- (void)handlePress:(id)a0;
- (void)fallback;
- (id)initWithArmedImage:(id)a0 successImage:(id)a1;
- (long long)_defaultState;
- (void)updateSubviewsForState;
- (void)setFallbackTimer;
- (void)unsetFallbackTimer;
- (void)engage;

@end
