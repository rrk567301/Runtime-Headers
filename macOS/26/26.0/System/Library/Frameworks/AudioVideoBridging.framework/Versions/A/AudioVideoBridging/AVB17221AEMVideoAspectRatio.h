@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying>

@property unsigned short aspectRatio;
@property unsigned char pixelWidth;
@property unsigned char pixelHeight;

+ (id)keyPathsForValuesAffectingPixelHeight;
+ (id)keyPathsForValuesAffectingPixelWidth;

- (unsigned char)pixelWidth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)pixelHeight;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setPixelHeight:(unsigned char)a0;
- (void)setPixelWidth:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
