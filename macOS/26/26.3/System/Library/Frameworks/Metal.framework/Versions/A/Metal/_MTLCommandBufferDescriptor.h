@protocol MTLDeadlineProfile, MTLLogState;

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    BOOL _retainedReferences;
    unsigned long long _errorOptions;
    id<MTLLogState> _logState;
}

@property (nonatomic) BOOL captureProgramAddressTable;
@property (nonatomic) BOOL cloneIntersectionFunctionTablesPerDispatch;
@property (nonatomic) id<MTLDeadlineProfile> deadlineProfile;
@property (nonatomic) BOOL disableFineGrainedComputePreemption;

- (void)setLogState:(id)a0;
- (void)setErrorOptions:(unsigned long long)a0;
- (id)init;
- (id)logState;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)retainedReferences;
- (void)setRetainedReferences:(BOOL)a0;
- (unsigned long long)errorOptions;

@end
