@class NSImage;

@interface IACastleIconView : NSView

@property (nonatomic) char enabled;
@property (retain, nonatomic) NSImage *icon;

- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
