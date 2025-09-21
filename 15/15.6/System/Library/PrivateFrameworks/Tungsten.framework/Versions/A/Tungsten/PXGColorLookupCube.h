@class NSData;

@interface PXGColorLookupCube : NSObject <NSCopying>

@property (nonatomic) long long edgeSize;
@property (readonly, nonatomic) char shouldCache;
@property (readonly, nonatomic) NSData *textureData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ center;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createTextureWithContext:(id)a0;

@end
