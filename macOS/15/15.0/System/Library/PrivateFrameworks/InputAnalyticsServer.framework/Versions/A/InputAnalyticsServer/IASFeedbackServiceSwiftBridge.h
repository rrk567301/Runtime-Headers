@class NSString;

@interface IASFeedbackServiceSwiftBridge : NSObject {
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ originalContent;
    void /* unknown type, empty encoding */ generatedContent;
    void /* unknown type, empty encoding */ modelInfo;
}

@property (nonatomic) void /* unknown type, empty encoding */ featureDomain;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) void /* unknown type, empty encoding */ action;
@property (nonatomic, copy) NSString *originalContent;
@property (nonatomic, copy) NSString *generatedContent;
@property (nonatomic, copy) NSString *modelInfo;

- (id)init;
- (void).cxx_destruct;
- (void)launchFeedbackWithCompletionHandler:(void (^)(void))a0;
- (void)reportPresentedWithCompletionHandler:(void (^)(void))a0;
- (id)initWithFeatureDomain:(long long)a0 bundleId:(id)a1 action:(long long)a2 originalContent:(id)a3 generatedContent:(id)a4 modelInfo:(id)a5;

@end
