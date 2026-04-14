@class NSString;

@interface MTLLegacySVStackOverflowErrorLog : MTLLegacySVGPULog

@property (retain, nonatomic) NSString *functionName;

- (id)description;
- (void)dealloc;

@end
