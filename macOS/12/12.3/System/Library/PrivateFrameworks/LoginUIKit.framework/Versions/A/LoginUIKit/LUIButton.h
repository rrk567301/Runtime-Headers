@class NSDictionary;

@interface LUIButton : NSButton {
    NSDictionary *_images;
}

+ (void)initialize;
+ (id)imagesForIdentifier:(id)a0 style:(int)a1;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)setStyle:(int)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (id)_appearance;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)focusRingType;
- (void)setImages:(id)a0;
- (void)_updateImages:(BOOL)a0;

@end
