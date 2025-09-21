@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying>

@property unsigned short aspectRatio;
@property unsigned char pixelWidth;
@property unsigned char pixelHeight;

+ (id)keyPathsForValuesAffectingPixelHeight;
+ (id)keyPathsForValuesAffectingPixelWidth;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)setPixelHeight:(unsigned char)a0;
- (unsigned char)pixelHeight;
- (unsigned char)pixelWidth;
- (void)setPixelWidth:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
