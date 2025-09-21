@class NSString, NSMutableArray;

@interface LUI2AvatarBackgroundView : LUI2View

@property (retain) NSString *backgroundColorDescription;
@property (retain) NSMutableArray *backgroundLayers;
@property (copy) NSString *colorDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_colorFromDescription:(id)a0;
- (void)_setupView;

@end
