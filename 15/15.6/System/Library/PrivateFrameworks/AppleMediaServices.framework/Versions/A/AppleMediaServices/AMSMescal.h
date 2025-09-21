@class NSString, AMSBagKeySet;

@interface AMSMescal : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_matchSignSapURL:(id)a0 bagDictionary:(id)a1;
+ (char)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bag:(id)a3 error:(id *)a4;
+ (id)_DAAPActionsForURLBagActions:(id)a0;
+ (id)_matchSignedActions:(id)a0 withURL:(id)a1;
+ (id)_signedActionDataFromRequest:(id)a0 policy:(id)a1;
+ (id)createBagForSubProfile;
+ (char)primeTheConnectionWithBag:(id)a0 error:(id *)a1;
+ (char)primeTheConnectionWithContract:(id)a0 error:(id *)a1;
+ (char)primeTheConnectionWithContract:(id)a0 logKey:(id)a1 error:(id *)a2;
+ (char)shouldReprimeConnectionWithResult:(id)a0;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bag:(id)a2 error:(id *)a3;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bagContract:(id)a2 error:(id *)a3;
+ (id)signatureFromData:(id)a0 type:(long long)a1 bagContract:(id)a2 logKey:(id)a3 error:(id *)a4;
+ (id)signaturePromiseFromData:(id)a0 type:(long long)a1 bag:(id)a2;
+ (id)signaturePromiseFromRequest:(id)a0 type:(long long)a1 bag:(id)a2;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bag:(id)a2 error:(id *)a3;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bagContract:(id)a2 error:(id *)a3;
+ (id)signatureUsingRequest:(id)a0 type:(long long)a1 bagContract:(id)a2 logKey:(id)a3 error:(id *)a4;
+ (id)verificationPromiseForTask:(id)a0 data:(id)a1 type:(long long)a2 bag:(id)a3;
+ (char)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bagContract:(id)a3 error:(id *)a4;
+ (char)verifyTask:(id)a0 data:(id)a1 type:(long long)a2 bagContract:(id)a3 logKey:(id)a4 error:(id *)a5;


@end
