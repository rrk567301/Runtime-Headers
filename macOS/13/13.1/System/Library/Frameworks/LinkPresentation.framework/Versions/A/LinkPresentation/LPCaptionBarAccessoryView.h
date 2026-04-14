@class NSColor, NSImageView;

@interface LPCaptionBarAccessoryView : LPComponentView {
    long long _type;
    NSColor *_color;
    NSImageView *_accessoryView;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)_createImageViewWithImage:(id)a0;
- (id)initWithHost:(id)a0 type:(long long)a1 side:(long long)a2;
- (id)ensureAccessoryView;

@end
