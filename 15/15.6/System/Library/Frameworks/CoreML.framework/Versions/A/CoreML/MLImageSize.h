@interface MLImageSize : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) long long pixelsWide;
@property (readonly) long long pixelsHigh;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1;
- (char)isEqualToImageSize:(id)a0;

@end
