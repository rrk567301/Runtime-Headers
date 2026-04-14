@interface MTLBinaryKey : NSObject <NSCopying> {
    void *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (unsigned long long)hash;
- (BOOL)isEqualToKey:(id)a0;
- (id)initWithHash:(const void *)a0;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (const void *)getFunctionId;

@end
