@interface GESSMaterialParameterData : NSObject {
    struct CGImage { } *_image;
}

- (id)init;
- (BOOL)setColor:(struct CGColor { } *)a0;
- (BOOL)setTextureImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)getTextureImage;

@end
