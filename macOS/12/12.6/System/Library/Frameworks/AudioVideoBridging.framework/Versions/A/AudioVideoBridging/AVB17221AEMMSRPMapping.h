@interface AVB17221AEMMSRPMapping : AVB17221AEMObject <NSCopying>

@property unsigned char trafficClass;
@property unsigned char priority;
@property unsigned short vlanID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
