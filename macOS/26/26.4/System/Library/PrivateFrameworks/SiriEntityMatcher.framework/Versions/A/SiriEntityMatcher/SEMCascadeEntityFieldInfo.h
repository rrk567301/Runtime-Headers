@interface SEMCascadeEntityFieldInfo : NSObject <SEMEntityFieldInfo> {
    unsigned short _fieldType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned short)fieldType;
- (unsigned char)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithFieldType:(unsigned short)a0;
- (long long)toKVFieldType:(id *)a0;
- (BOOL)isEqualToCascadeEntityFieldInfo:(id)a0;

@end
