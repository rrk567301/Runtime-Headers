@class PCNativeColor, NSArray;

@interface PCNativeShadowStyle : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *color;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSArray *offsets;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
