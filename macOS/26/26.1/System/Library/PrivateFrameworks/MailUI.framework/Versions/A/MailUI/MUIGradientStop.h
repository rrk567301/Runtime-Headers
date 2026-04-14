@class NSColor;

@interface MUIGradientStop : NSObject

@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) double location;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithColor:(id)a0 location:(double)a1;

@end
