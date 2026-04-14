@interface MTLBinaryKey : NSObject <NSCopying> {
    void *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (id)description;
- (BOOL)isEqualToKey:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHash:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (const void *)getFunctionId;

@end
