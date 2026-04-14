@class NSData, NSArray;

@interface INItemProviderRequestMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *metadata;
@property (readonly, copy) NSArray *supportedContentTypes;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0 supportedContentTypes:(id)a1;

@end
