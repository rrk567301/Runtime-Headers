@class NSData, NSURL;

@interface ISCustomIcon : ISConcreteIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bookmark;
@property (readonly) NSURL *url;

- (id)_fallbackKey;
- (id)makeResourceProvider;
- (void)encodeWithCoder:(id)a0;
- (id)symbol;
- (id)initWithURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
