@interface AVB17221AEMVideoMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short programStream;
@property unsigned short elementaryStream;
@property unsigned short clusterOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
