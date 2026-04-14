@class NSString;

@interface IASFeedbackServiceSwiftBridge : NSObject {
    void /* function */ bundleId;
    void /* function */ sceneId;
    void /* function */ originalContent;
    void /* function */ generatedContent;
    void /* function */ modelInfo;
    void /* function */ detectedModelLanguage;
}

@property (nonatomic) long long featureDomain;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *sceneId;
@property (nonatomic) long long action;
@property (nonatomic, copy) NSString *originalContent;
@property (nonatomic, copy) NSString *generatedContent;
@property (nonatomic, copy) NSString *modelInfo;
@property (nonatomic, copy) NSString *detectedModelLanguage;

- (id)init;
- (void).cxx_destruct;
- (void)launchFeedbackWithCompletionHandler:(void (^)(void))a0;
- (void)reportPresentedWithCompletionHandler:(void (^)(void))a0;
- (id)initWithFeatureDomain:(long long)a0 bundleId:(id)a1 sceneId:(id)a2 action:(long long)a3 originalContent:(id)a4 generatedContent:(id)a5 modelInfo:(id)a6 detectedModelLanguage:(id)a7;

@end
