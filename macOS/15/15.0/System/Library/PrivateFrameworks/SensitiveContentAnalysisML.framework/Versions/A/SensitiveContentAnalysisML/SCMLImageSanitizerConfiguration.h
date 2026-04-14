@class NSString;

@interface SCMLImageSanitizerConfiguration : NSObject

@property (nonatomic) BOOL trackPerformance;
@property (nonatomic) unsigned int granularity;
@property (copy, nonatomic) NSString *clipClassifierConfig;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned long long backends;

- (id)init;
- (void).cxx_destruct;

@end
