@class PCNativeColor, NSArray;

@interface PCNativeShadowStyle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *color;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSArray *offsets;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
