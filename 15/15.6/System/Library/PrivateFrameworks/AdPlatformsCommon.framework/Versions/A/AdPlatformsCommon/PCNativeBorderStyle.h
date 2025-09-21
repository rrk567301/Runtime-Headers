@class PCNativeColor;

@interface PCNativeBorderStyle : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PCNativeColor *color;
@property (nonatomic) double width;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
