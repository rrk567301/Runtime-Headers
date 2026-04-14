@interface DSP_HAL_Mock : NSObject

+ (void)setTestHooks:(void *)a0;
+ (BOOL)hasTestHooks;

- (id)createFactory:(int)a0;

@end
