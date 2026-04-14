@interface AMSUIAgeVerificationCore : NSObject

+ (id)_appendClientFields:(id)a0 asQueryParametersToURL:(id)a1;
+ (id)_titleForResult:(id)a0 withBag:(id)a1 bundle:(id)a2;
+ (id)_messageForResult:(id)a0 withBag:(id)a1 expiration:(id)a2 managingProfileName:(id)a3 dateFormatter:(id)a4 bundle:(id)a5;
+ (id)_promiseResultForCancelWithVerificationResult:(id)a0;
+ (id)_timestampOfExpiryFrom:(id)a0;

@end
