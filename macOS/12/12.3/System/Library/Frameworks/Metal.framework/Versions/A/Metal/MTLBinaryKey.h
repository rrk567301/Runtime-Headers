@interface MTLBinaryKey : NSObject <NSCopying> {
    struct MTLFunctionId { struct { unsigned char x0[32]; } x0[3]; unsigned int x1; } *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithHash:(const struct { unsigned char x0[32]; } *)a0;
- (const struct MTLFunctionId { struct { unsigned char x0[32]; } x0[3]; unsigned int x1; } *)getFunctionId;
- (BOOL)isEqualToKey:(id)a0;
- (id)initWithFunctionId:(const struct MTLFunctionId { struct { unsigned char x0[32]; } x0[3]; unsigned int x1; } *)a0;

@end
