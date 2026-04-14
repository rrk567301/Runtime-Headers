@class NSImage;

@interface TipImageProxy : NSImageView {
    void /* unknown type, empty encoding */ shouldDisplay;
    void /* unknown type, empty encoding */ tintColor;
    void /* unknown type, empty encoding */ clipsToBounds;
}

@property (nonatomic, retain) NSImage *image;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
