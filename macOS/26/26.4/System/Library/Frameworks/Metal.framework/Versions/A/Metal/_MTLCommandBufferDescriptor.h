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

- (unsigned long long)errorOptions;
- (id)logState;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRetainedReferences:(BOOL)a0;
- (void)setErrorOptions:(unsigned long long)a0;
- (BOOL)retainedReferences;
- (id)init;
- (void)dealloc;
- (void)setLogState:(id)a0;

@end
