@class NSDate;
@protocol MTLTexture;

@interface PXGMetalTextureCacheEntry : NSObject

@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) NSDate *time;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTexture:(id)a0;

@end
