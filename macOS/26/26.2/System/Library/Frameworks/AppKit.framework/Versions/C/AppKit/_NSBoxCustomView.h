@class NSColor, NSString;

@interface _NSBoxCustomView : NSView <_NSBoxCustomViewProtocol>

@property (copy) NSColor *fillColor;
@property (copy) NSColor *borderColor;
@property double borderWidth;
@property double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)updateLayer;
- (BOOL)isOpaque;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)wantsUpdateLayer;

@end
