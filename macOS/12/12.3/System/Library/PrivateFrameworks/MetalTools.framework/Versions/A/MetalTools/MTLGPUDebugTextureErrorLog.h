@interface MTLGPUDebugTextureErrorLog : MTLGPUDebugGPULog

@property (nonatomic) unsigned char errorReason;

- (id)description;

@end
