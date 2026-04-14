@class NSData;

@interface TUContactImageResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) long long imageType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImageData:(id)a0 type:(long long)a1;

@end
