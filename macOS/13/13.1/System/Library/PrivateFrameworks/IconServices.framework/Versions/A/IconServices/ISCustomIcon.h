@class NSData, NSURL;

@interface ISCustomIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bookmark;
@property (readonly) NSURL *url;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)symbol;
- (id)makeResourceProvider;
- (id)_fallbackKey;

@end
