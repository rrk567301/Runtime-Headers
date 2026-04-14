@class Config;

@interface CESASpeechProfileConfig : NSObject

@property (class, nonatomic, readonly) CESASpeechProfileConfig *shared;

@property (nonatomic, readonly) Config *config;

- (void).cxx_destruct;
- (id)init;

@end
