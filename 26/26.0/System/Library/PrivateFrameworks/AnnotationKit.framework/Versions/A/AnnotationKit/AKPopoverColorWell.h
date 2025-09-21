@protocol AKPopoverColorWellDelegate;

@interface AKPopoverColorWell : NSPopoverColorWell {
    BOOL _shouldPreventDeactivation;
}

@property double colorWellHeight;
@property (nonatomic) long long colorWellType;
@property (weak, nonatomic) id<AKPopoverColorWellDelegate> delegate;

+ (id)_bezelRenderingButton;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)activate:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)deactivate;
- (void)setColor:(id)a0;
- (void).cxx_destruct;
- (void)drawColor;
- (id)makeBackingLayer;
- (id)_colorWellTypeName;
- (id)borderPath;

@end
