@interface CRGOutputConstraints : NSObject {
    void /* unknown type, empty encoding */ _originAlignment;
    void /* unknown type, empty encoding */ _sizeGranularity;
    void /* unknown type, empty encoding */ _writeAlignment;
    void /* unknown type, empty encoding */ _maxTileSize;
}

+ (id)writeAlignment:(SEL)a0;
+ (id)maxTileSize:(SEL)a0;
+ (id)originAlignment:(SEL)a0;
+ (id)originAlignment:(id)a0 sizeGranularity:(SEL)a1 writeAlignment:(void /* unknown type, empty encoding */)a2 maxTileSize:(void /* unknown type, empty encoding */)a3;
+ (id)sizeGranularity:(SEL)a0;

- (id)description;
- (id)writeAlignment:(SEL)a0;
- (id)initWithOriginAlignment:(id)a0 sizeGranularity:(SEL)a1 writeAlignment:(void /* unknown type, empty encoding */)a2 maxTileSize:(void /* unknown type, empty encoding */)a3;
- (id)maxTileSize:(SEL)a0;
- (id)originAlignment:(SEL)a0;
- (id)sizeGranularity:(SEL)a0;

@end
