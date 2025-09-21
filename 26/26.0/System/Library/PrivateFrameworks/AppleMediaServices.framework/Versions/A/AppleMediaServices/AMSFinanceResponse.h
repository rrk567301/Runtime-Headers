@class NSError, NSArray, AMSFinancePaymentSheetResponse, NSURL, AMSURLTaskInfo, NSDictionary, ACAccount, AMSFinanceDialogResponse, AMSFinanceAuthenticateResponse;

@interface AMSFinanceResponse : NSObject

@property (retain) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse;
@property (retain) AMSFinanceDialogResponse *cachedDialogResponse;
@property (retain) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse;
@property (retain) NSDictionary *responseDictionary;
@property (retain) AMSURLTaskInfo *taskInfo;
@property (readonly) long long dialogKind;
@property (readonly) ACAccount *account;
@property (readonly) NSArray *actions;
@property (readonly) NSError *serverError;
@property (readonly) BOOL supportedProtocolVersion;
@property (readonly) NSURL *versionMismatchURL;
@property (readonly) NSArray *pingURLs;

+ (id)valueForProtocolKey:(id)a0 inResponse:(id)a1;

- (id)_performerForDialog;
- (id)initWithTaskInfo:(id)a0 decodedObject:(id)a1;
- (id)_performerForPaymentSheetWithDelegateAuthentication:(BOOL)a0;
- (id)_performerForActionDictionary;
- (id)_performerForAuthenticate;
- (id)_valueForProtocolKey:(id)a0;
- (id)_performerForCreditDisplay;
- (id)_performerForExpressCheckout;
- (void).cxx_destruct;

@end
