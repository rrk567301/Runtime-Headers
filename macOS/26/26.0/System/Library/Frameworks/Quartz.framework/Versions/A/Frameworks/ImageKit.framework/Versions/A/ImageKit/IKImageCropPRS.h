@interface IKImageCropPRS : NSObject <NSCoding, NSCopying> {
    struct CGPoint { double x; double y; } _position;
    struct CGSize { double width; double height; } _scale;
    float _rotation;
}

- (struct CGSize { double x0; double x1; })scale;
- (void)setScale:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (float)rotation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })position;
- (void)setRotation:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setDictionaryRepresentation:(id)a0;
- (struct CGPoint { double x0; double x1; })transformVectorFromViewSpaceToCropSpace:(struct CGPoint { double x0; double x1; })a0;

@end
