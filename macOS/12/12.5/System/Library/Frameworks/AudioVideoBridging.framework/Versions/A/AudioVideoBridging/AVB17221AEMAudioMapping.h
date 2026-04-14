@interface AVB17221AEMAudioMapping : AVB17221AEMObject <NSCopying>

@property unsigned short streamIndex;
@property unsigned short streamChannel;
@property unsigned short clusterOffset;
@property unsigned short clusterChannel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;

@end
