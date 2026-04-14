@interface MTLGPUDebugAccelerationStructureErrorLog : MTLGPUDebugGPULog

@property (nonatomic) unsigned long long expectedAccelerationStructureType;
@property (nonatomic) unsigned long long actualAccelerationStructureType;

- (void)dealloc;
- (id)description;

@end
