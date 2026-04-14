@interface RSGeometryMeta : NSObject <NSCopying> {
    BOOL _isCenterScaleUpdated;
    float _pixelSize;
    float _floorHeight;
    float _ceilingHeight;
    float _supportHeight;
    int _imageSize;
    int _zSlice;
    float _visualFloorHeight;
    float _visualCeilingHeight;
    void /* unknown type, empty encoding */ _floorCeilingCount;
    void /* unknown type, empty encoding */ _center;
    void /* unknown type, empty encoding */ _scale;
    void /* unknown type, empty encoding */ _shift;
}

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
