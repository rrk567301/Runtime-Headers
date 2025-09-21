@interface MTLBinaryKey : NSObject <NSCopying> {
    void *_id;
}

@property (readonly) const struct { unsigned char x0[32]; } *value;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithHash:(const void *)a0;
- (const void *)getFunctionId;
- (char)isEqualToKey:(id)a0;

@end
