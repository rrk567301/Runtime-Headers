@interface AVB17221AEMDescriptorCount : AVB17221AEMObject <NSCopying>

@property unsigned short descriptorType;
@property unsigned short count;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugLogStringWithIndentation:(id)a0;

@end
