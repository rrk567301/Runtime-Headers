@class NSString, NSMutableArray;

@interface LUI2AvatarBackgroundView : LUI2View

@property (retain) NSString *backgroundColorDescription;
@property (retain) NSMutableArray *backgroundLayers;
@property (copy) NSString *colorDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)_colorFromDescription:(id)a0;
- (void)_setupView;

@end
