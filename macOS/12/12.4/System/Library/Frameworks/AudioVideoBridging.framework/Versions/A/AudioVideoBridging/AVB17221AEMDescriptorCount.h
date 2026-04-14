@interface AVB17221AEMDescriptorCount : AVB17221AEMObject <NSCopying>

@property unsigned short descriptorType;
@property unsigned short count;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)debugLogStringWithIndentation:(id)a0;

@end
