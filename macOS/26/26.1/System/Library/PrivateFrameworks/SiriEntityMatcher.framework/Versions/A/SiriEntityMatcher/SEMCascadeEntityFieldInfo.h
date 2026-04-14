@interface SEMCascadeEntityFieldInfo : NSObject <SEMEntityFieldInfo> {
    unsigned short _fieldType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned char)entityType;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned short)fieldType;
- (id)init;
- (id)initWithFieldType:(unsigned short)a0;
- (long long)toKVFieldType:(id *)a0;
- (BOOL)isEqualToCascadeEntityFieldInfo:(id)a0;

@end
