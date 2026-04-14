@class NSColor;

@interface MUIGradientStop : NSObject

@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) double location;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithColor:(id)a0 location:(double)a1;

@end
