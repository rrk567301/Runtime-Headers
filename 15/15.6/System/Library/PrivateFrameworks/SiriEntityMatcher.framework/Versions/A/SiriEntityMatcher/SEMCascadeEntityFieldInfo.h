@interface SEMCascadeEntityFieldInfo : NSObject <SEMEntityFieldInfo> {
    unsigned short _fieldType;
}

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned short)fieldType;
- (unsigned char)entityType;
- (long long)toKVFieldType:(id *)a0;
- (id)initWithFieldType:(unsigned short)a0;
- (char)isEqualToCascadeEntityFieldInfo:(id)a0;

@end
