@class EXSurfacePlaneDescriptorArray, EXSurfaceMemoryRegion;

@interface EXSurfaceDescriptor : EXSurfaceImageDescriptor <EXSurfaceMutableImageLayout, NSCopying> {
    unsigned long long _planeCount;
}

@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) long long allocationSize;
@property (nonatomic) unsigned long long planeCount;
@property (readonly) EXSurfacePlaneDescriptorArray *planes;
@property (retain, nonatomic) EXSurfaceMemoryRegion *memoryRegion;
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
- (void).cxx_destruct;
- (BOOL)validateDescriptorObjC;

@end
