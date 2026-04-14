@interface AVB17221AEMAudioMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short streamChannel;
@property unsigned short clusterOffset;
@property unsigned short clusterChannel;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(BOOL)a0;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
