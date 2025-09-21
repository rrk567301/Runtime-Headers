@class NSDictionary;

@interface LUIButton : NSButton {
    NSDictionary *_images;
}

+ (void)initialize;
+ (id)imagesForIdentifier:(id)a0 style:(int)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)resignFirstResponder;
- (void)setEnabled:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (void)setImages:(id)a0;
- (void)setTitle:(id)a0;
- (void)setStyle:(int)a0;
- (void)sizeToFit;
- (void).cxx_destruct;
- (unsigned long long)focusRingType;
- (id)_appearance;
- (void)_updateImages:(BOOL)a0;

@end
