@interface AVB17221AEMLocalizedStringReference : AVB17221AEMObject <NSCopying>

@property unsigned short reference;
@property unsigned short offset;
@property unsigned char index;

+ (id)keyPathsForValuesAffectingIndex;
+ (id)keyPathsForValuesAffectingOffset;

- (void)setOffset:(unsigned short)a0;
- (unsigned short)offset;
- (void)setIndex:(unsigned char)a0;
- (id)init;
- (unsigned char)index;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
