@class IPAImageSizePolicy, PAImageRequestTileHint, NSDictionary, PAImageRequestCacheHint;

@interface PALoadRequest : NSObject <NSCoding>

@property (readonly) PAImageRequestCacheHint *cacheHint;
@property (readonly) PAImageRequestTileHint *tileHint;
@property (readonly) IPAImageSizePolicy *sizePolicy;
@property (readonly) NSDictionary *cgOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCacheHint:(id)a0 tileHint:(id)a1;
- (id)initWithCacheHint:(id)a0 tileHint:(id)a1 sizePolicy:(id)a2;

@end
