@class PVImage, PVFace;

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying> {
    PVFace *_face;
    PVImage *_image;
}

+ (id)descriptorForFace:(id)a0 image:(id)a1;

- (id)image;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)face;
- (id)initWithFace:(id)a0 image:(id)a1;

@end
