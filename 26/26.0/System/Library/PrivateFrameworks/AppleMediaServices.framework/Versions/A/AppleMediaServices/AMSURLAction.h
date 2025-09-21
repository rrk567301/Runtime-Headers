@class NSURL, AMSDialogResult, NSDictionary, AMSAuthenticateResult, NSData, NSString, NSError;

@interface AMSURLAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSAuthenticateResult *authenticateResult;
@property (retain) AMSDialogResult *dialogResult;
@property (retain) NSDictionary *updatedHeaders;
@property (retain) NSData *updatedBody;
@property (retain) NSString *updatedMethod;
@property (readonly) long long actionType;
@property (retain) NSString *updatedBuyParams;
@property (readonly) NSError *error;
@property (retain) NSString *reason;
@property (readonly) NSURL *redirectURL;
@property (retain) NSString *retryIdentifier;

+ (id)retryAction;
+ (id)proceedAction;
+ (id)actionWithError:(id)a0;
+ (id)redirectActionWithURL:(id)a0;

- (id)initWithType:(long long)a0 error:(id)a1 reason:(id)a2 redirectURL:(id)a3;
- (id)initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
