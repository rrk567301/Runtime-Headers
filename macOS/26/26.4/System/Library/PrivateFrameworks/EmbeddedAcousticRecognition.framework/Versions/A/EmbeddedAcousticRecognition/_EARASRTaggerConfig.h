@class NSString, _EARASRTaggerCreateMLConfig;

@interface _EARASRTaggerConfig : NSObject

@property (nonatomic) struct shared_ptr<quasar::ASRTaggerElectraConfig> { struct ASRTaggerElectraConfig *__ptr_; struct __shared_weak_count *__cntrl_; } electraConfig;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) unsigned long long taggerType;
@property (readonly, nonatomic) _EARASRTaggerCreateMLConfig *createMLConfig;

+ (void)initialize;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
