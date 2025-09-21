@class NSWindow, NSViewCornerRadii;

@interface NSWindowScrollPocketElement : NSObject

@property (nonatomic) void *identifier;
@property (retain, nonatomic) NSWindow *window;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSViewCornerRadii *cornerRadii;

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 style:(long long)a2 cornerRadii:(id)a3;

@end
