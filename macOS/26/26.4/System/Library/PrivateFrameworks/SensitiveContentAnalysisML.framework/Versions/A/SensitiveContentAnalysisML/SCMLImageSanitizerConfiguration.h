@class NSString;

@interface SCMLImageSanitizerConfiguration : NSObject

@property (nonatomic) BOOL trackPerformance;
@property (copy, nonatomic) NSString *clipClassifierConfig;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned long long backends;
@property (nonatomic) unsigned int granularity;
@property (nonatomic) unsigned int region;
@property (nonatomic) int onBehalfOfProcessID;
@property (copy, nonatomic) NSString *modelManagerServicesUseCaseID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;

@end
