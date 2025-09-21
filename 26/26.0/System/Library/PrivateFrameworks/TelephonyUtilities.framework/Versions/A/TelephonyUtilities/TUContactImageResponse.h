@class NSData;

@interface TUContactImageResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) long long imageType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageData:(id)a0 type:(long long)a1;

@end
