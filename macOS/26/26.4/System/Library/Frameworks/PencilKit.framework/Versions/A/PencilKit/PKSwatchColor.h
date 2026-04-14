@class NSColor, NSString;

@interface PKSwatchColor : NSObject

@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) NSString *identifier;

+ (id)swatchColor:(id)a0 identifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 identifier:(id)a1;

@end
