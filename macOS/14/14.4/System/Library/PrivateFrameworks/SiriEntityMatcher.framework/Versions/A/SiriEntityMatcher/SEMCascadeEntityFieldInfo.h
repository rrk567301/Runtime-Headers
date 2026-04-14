@interface SEMCascadeEntityFieldInfo : NSObject <SEMEntityFieldInfo> {
    long long _fieldType;
    unsigned char _fieldComponent;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned char)entityType;
- (long long)toKVFieldType:(id *)a0;
- (unsigned char)fieldComponent;
- (id)initWithFieldType:(long long)a0 fieldComponent:(unsigned char)a1;
- (BOOL)isEqualToCascadeEntityFieldInfo:(id)a0;

@end
