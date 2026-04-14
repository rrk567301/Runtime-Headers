@protocol MTLDeadlineProfile;

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
}

@property (nonatomic) BOOL captureProgramAddressTable;
@property (nonatomic) id<MTLDeadlineProfile> deadlineProfile;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRetainedReferences:(BOOL)a0;
- (BOOL)retainedReferences;
- (unsigned long long)errorOptions;
- (void)setErrorOptions:(unsigned long long)a0;

@end
