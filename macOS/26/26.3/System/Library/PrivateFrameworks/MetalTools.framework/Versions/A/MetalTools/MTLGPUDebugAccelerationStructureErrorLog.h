@interface MTLGPUDebugAccelerationStructureErrorLog : MTLGPUDebugGPULog

@property (nonatomic) unsigned long long expectedAccelerationStructureType;
@property (nonatomic) unsigned long long actualAccelerationStructureType;

- (id)description;
- (void)dealloc;

@end
