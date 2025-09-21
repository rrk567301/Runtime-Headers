@interface _HKAppURLSpecification : NSObject

+ (char)isAtrialFibrillationEventURL:(id)a0;
+ (char)isClinicalLoginRedirectURL:(id)a0;
+ (char)isClinicalOnboardingURL:(id)a0;
+ (char)parseClinicalLoginRedirectURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
+ (char)parseClinicalOnboardingURL:(id)a0 resultHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;

@end
