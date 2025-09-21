@interface AVB17221AEMMSRPMapping : AVB17221AEMObject <NSCopying>

@property unsigned char trafficClass;
@property unsigned char priority;
@property unsigned short vlanID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (id)xmlRepresentation;

@end
