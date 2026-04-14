@interface AVB17221AEMSensorMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short streamSignal;
@property unsigned short clusterOffset;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
