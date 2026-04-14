@interface _VZTouch : NSObject

@property (readonly) unsigned char index;
@property (readonly) long long phase;
@property (readonly) struct CGPoint { double x; double y; } location;
@property (readonly) long long swipeAim;

- (id)initWithIndex:(unsigned char)a0 phase:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 swipeAim:(long long)a3;

@end
