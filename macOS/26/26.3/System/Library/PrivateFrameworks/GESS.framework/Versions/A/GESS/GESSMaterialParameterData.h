@interface GESSMaterialParameterData : NSObject {
    struct CGImage { } *_image;
}

- (BOOL)setColor:(struct CGColor { } *)a0;
- (id)init;
- (BOOL)setTextureImage:(struct CGImage { } *)a0;
- (struct CGImage { } *)getTextureImage;

@end
