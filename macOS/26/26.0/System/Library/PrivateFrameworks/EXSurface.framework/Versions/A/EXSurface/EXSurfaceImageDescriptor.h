@interface EXSurfaceImageDescriptor : NSObject <EXSurfaceMutableImageLayout, NSCopying> {
    struct { long long offset; long long size; long long width; long long height; long long bytesPerRow; long long bytesPerElement; long long elementWidth; long long elementHeight; } _private;
}

@property (nonatomic) long long offset;
@property (nonatomic) long long size;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long bytesPerRow;
@property (nonatomic) long long bytesPerElement;
@property (nonatomic) long long elementWidth;
@property (nonatomic) long long elementHeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
