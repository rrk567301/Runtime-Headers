@interface AVB17221AEMLocalizedStringReference : AVB17221AEMObject <NSCopying>

@property unsigned short reference;
@property unsigned short offset;
@property unsigned char index;

+ (id)keyPathsForValuesAffectingOffset;
+ (id)keyPathsForValuesAffectingIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (unsigned char)index;
- (unsigned short)offset;
- (void)setOffset:(unsigned short)a0;
- (void)setIndex:(unsigned char)a0;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
