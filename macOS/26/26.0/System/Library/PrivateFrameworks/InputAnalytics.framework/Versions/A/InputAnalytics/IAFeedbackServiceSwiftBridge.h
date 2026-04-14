@class NSString;

@interface IAFeedbackServiceSwiftBridge : NSObject {
    void /* function */ originalContent;
    void /* function */ generatedContent;
    void /* function */ modelInfo;
}

@property (nonatomic) long long featureDomain;
@property (nonatomic) long long action;
@property (nonatomic, copy) NSString *originalContent;
@property (nonatomic, copy) NSString *generatedContent;
@property (nonatomic, copy) NSString *modelInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeatureDomain:(long long)a0 action:(long long)a1 originalContent:(id)a2 generatedContent:(id)a3 modelInfo:(id)a4;
- (void)launchFeedbackWithCompletionHandler:(void (^)(void))a0;
- (void)reportPresentedWithCompletionHandler:(void (^)(void))a0;

@end
