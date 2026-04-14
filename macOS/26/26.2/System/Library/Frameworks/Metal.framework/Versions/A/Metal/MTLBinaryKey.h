@interface MTLBinaryKey : NSObject <NSCopying> {
    void *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithHash:(const void *)a0;
- (BOOL)isEqualToKey:(id)a0;
- (void)dealloc;
- (const void *)getFunctionId;

@end
