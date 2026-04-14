@interface AVB17221AEMAudioMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short streamChannel;
@property unsigned short clusterOffset;
@property unsigned short clusterChannel;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
