@class AKController;

@interface AKToolbarViewController : NSTitlebarAccessoryViewController

@property (weak) AKController *controller;
@property (nonatomic) double maxHDRGain;
@property (readonly) BOOL isPresentingPopover;

+ (struct CGSize { double x0; double x1; })minimumSize;
+ (BOOL)isOptionKeyPressed;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (unsigned long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)imageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)a0;

- (id)initWithController:(id)a0;
- (void)teardown;
- (void).cxx_destruct;
- (id)_toolbarButtonItemOfType:(unsigned long long)a0 style:(unsigned long long)a1;
- (void)revalidateItems;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (void)revalidateHDR;
- (void)revalidateHDRandPropagateChanges:(BOOL)a0;
- (void)setFillColorUIDisplayToColor:(id)a0;

@end
