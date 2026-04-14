@class NSString, NSArray, NSDictionary, FBKSAnnotatedContentObjc;

@interface FBKSInteractionObjc : NSObject

@property (copy, nonatomic) NSString *featureDomain;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (retain, nonatomic) FBKSAnnotatedContentObjc *originalAnnotatedContent;
@property (retain, nonatomic) FBKSAnnotatedContentObjc *generatedAnnotatedContent;
@property (retain, nonatomic) NSArray *extraContent;
@property (retain, nonatomic) NSDictionary *prefillQuestions;
@property (copy, nonatomic) NSString *attributionBundleId;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *sceneId;
@property (copy, nonatomic) NSString *presentingBundleId;

- (void).cxx_destruct;
- (void)evaluateWithAction:(long long)a0 showFeedbackForm:(BOOL)a1 associateWithAppleAccount:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithFeatureDomain:(id)a0 feedbackTitle:(id)a1 prefillQuestions:(id)a2 attributionBundleId:(id)a3 modelVersion:(id)a4 originalAnnotatedContent:(id)a5 generatedAnnotatedContent:(id)a6 extraContent:(id)a7;
- (void)presentedWithCompletion:(id /* block */)a0;

@end
