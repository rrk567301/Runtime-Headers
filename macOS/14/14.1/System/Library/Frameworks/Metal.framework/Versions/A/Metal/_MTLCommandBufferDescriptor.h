@protocol MTLDeadlineProfile;

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
}

@property (nonatomic) BOOL captureProgramAddressTable;
@property (nonatomic) BOOL cloneIntersectionFunctionTablesPerDispatch;
@property (nonatomic) id<MTLDeadlineProfile> deadlineProfile;
@property (nonatomic) BOOL disableFineGrainedComputePreemption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)errorOptions;
- (BOOL)retainedReferences;
- (void)setRetainedReferences:(BOOL)a0;
- (void)setErrorOptions:(unsigned long long)a0;

@end
