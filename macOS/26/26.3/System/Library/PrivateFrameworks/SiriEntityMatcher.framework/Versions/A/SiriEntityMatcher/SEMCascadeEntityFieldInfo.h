@interface SEMCascadeEntityFieldInfo : NSObject <SEMEntityFieldInfo> {
    unsigned short _fieldType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)init;
- (unsigned short)fieldType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)entityType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFieldType:(unsigned short)a0;
- (long long)toKVFieldType:(id *)a0;
- (BOOL)isEqualToCascadeEntityFieldInfo:(id)a0;

@end
