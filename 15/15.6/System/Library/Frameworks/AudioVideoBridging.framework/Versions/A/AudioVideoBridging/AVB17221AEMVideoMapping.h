@interface AVB17221AEMVideoMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short programStream;
@property unsigned short elementaryStream;
@property unsigned short clusterOffset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
