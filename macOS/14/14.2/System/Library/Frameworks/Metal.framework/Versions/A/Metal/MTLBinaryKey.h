@interface MTLBinaryKey : NSObject <NSCopying> {
    struct MTLFunctionId { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithHash:(const struct MTLMultiHashKey { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *)a0;
- (const struct MTLFunctionId { struct { unsigned char x0[32]; } x0; struct { unsigned char x0[32]; } x1[4]; unsigned int x2; } *)getFunctionId;
- (BOOL)isEqualToKey:(id)a0;

@end
