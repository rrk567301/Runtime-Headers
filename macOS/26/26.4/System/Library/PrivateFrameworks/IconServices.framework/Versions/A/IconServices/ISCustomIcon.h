@class NSData, NSURL;

@interface ISCustomIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bookmark;
@property (readonly) NSURL *url;

- (id)_fallbackKey;
- (id)symbol;
- (id)initWithURL:(id)a0;
- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
