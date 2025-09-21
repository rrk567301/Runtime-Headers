@class NSColor;

@interface MUIGradientStop : NSObject

@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) double location;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 location:(double)a1;

@end
