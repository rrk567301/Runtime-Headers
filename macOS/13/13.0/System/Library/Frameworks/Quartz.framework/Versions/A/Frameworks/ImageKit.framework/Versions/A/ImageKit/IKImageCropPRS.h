@interface IKImageCropPRS : NSObject <NSCoding, NSCopying> {
    struct CGPoint { double x; double y; } _position;
    struct CGSize { double width; double height; } _scale;
    float _rotation;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)rotation;
- (struct CGSize { double x0; double x1; })scale;
- (id)dictionaryRepresentation;
- (struct CGPoint { double x0; double x1; })position;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setScale:(struct CGSize { double x0; double x1; })a0;
- (void)setRotation:(float)a0;
- (void)setDictionaryRepresentation:(id)a0;
- (struct CGPoint { double x0; double x1; })transformVectorFromViewSpaceToCropSpace:(struct CGPoint { double x0; double x1; })a0;

@end
