@class NSString;

@interface MTLLegacySVTrapErrorLog : MTLLegacySVGPULog

@property (retain, nonatomic) NSString *functionName;

- (id)description;
- (void)dealloc;

@end
