@class NSString, NSLocale;

@interface SCMLTextSanitizerConfiguration : NSObject

@property (nonatomic) char trackPerformance;
@property (nonatomic) unsigned int granularity;
@property (nonatomic) char throwInAdapterAsyncHandler;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned long long backends;
@property (nonatomic) unsigned int region;
@property (nonatomic) int onBehalfOfProcessID;
@property (copy, nonatomic) NSString *modelManagerServicesUseCaseID;

- (void).cxx_destruct;
- (id)initWithModelManagerServicesUseCaseID:(id)a0;

@end
