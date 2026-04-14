@interface NSWindowLayout : NSObject <NSCopying, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenLayoutFrame;
    unsigned long long _resizeGeneration;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resizeGeneration:(unsigned long long)a1 screen:(id)a2;
- (id)initWithWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 resizeGeneration:(unsigned long long)a1 screenLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)adjustFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forWindow:(id)a1 onScreen:(id)a2;
- (BOOL)isValidForResizeGeneration:(unsigned long long)a0;

@end
