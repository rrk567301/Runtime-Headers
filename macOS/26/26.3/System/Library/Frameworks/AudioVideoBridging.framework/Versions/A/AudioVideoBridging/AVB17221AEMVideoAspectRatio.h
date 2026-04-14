@interface AVB17221AEMVideoAspectRatio : AVB17221AEMObject <NSCopying>

@property unsigned short aspectRatio;
@property unsigned char pixelWidth;
@property unsigned char pixelHeight;

+ (id)keyPathsForValuesAffectingPixelHeight;
+ (id)keyPathsForValuesAffectingPixelWidth;

- (unsigned char)pixelHeight;
- (unsigned char)pixelWidth;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setPixelHeight:(unsigned char)a0;
- (void)setPixelWidth:(unsigned char)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
