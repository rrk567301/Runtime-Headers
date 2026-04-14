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

- (void)fallback;
- (void)highlight:(BOOL)a0;
- (void)setState:(long long)a0;
- (void)dealloc;
- (long long)state;
- (long long)_defaultState;
- (id)declaredLayoutConstraints;
- (void)engage;
- (void)handlePress:(id)a0;
- (id)initWithArmedImage:(id)a0 successImage:(id)a1;
- (void)setFallbackTimer;
- (void)unsetFallbackTimer;
- (void)updateSubviewsForState;

@end
