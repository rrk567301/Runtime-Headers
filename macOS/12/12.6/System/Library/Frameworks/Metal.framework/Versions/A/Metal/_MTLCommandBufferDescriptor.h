@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
}

@property (nonatomic) BOOL captureProgramAddressTable;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)retainedReferences;
- (unsigned long long)errorOptions;
- (void)setRetainedReferences:(BOOL)a0;
- (void)setErrorOptions:(unsigned long long)a0;

@end
