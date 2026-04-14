@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying>

@property unsigned short aspectRatio;
@property unsigned char pixelWidth;
@property unsigned char pixelHeight;

+ (id)keyPathsForValuesAffectingPixelWidth;
+ (id)keyPathsForValuesAffectingPixelHeight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setPixelHeight:(unsigned char)a0;
- (unsigned char)pixelHeight;
- (void)setPixelWidth:(unsigned char)a0;
- (unsigned char)pixelWidth;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
