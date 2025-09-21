@protocol MTLDeadlineProfile, MTLLogState;

@interface _MTLCommandBufferDescriptor : MTLCommandBufferDescriptor {
    char _retainedReferences;
    unsigned long long _errorOptions;
    id<MTLLogState> _logState;
}

@property (nonatomic) char captureProgramAddressTable;
@property (nonatomic) char cloneIntersectionFunctionTablesPerDispatch;
@property (nonatomic) id<MTLDeadlineProfile> deadlineProfile;
@property (nonatomic) char disableFineGrainedComputePreemption;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)errorOptions;
- (char)retainedReferences;
- (void)setRetainedReferences:(char)a0;
- (id)logState;
- (void)setErrorOptions:(unsigned long long)a0;
- (void)setLogState:(id)a0;

@end
