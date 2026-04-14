@class NSError, NSArray, AMSFinancePaymentSheetResponse, NSURL, AMSURLTaskInfo, NSDictionary, ACAccount, AMSFinanceDialogResponse, AMSFinanceAuthenticateResponse;

@interface AMSFinanceResponse : NSObject

@property (retain) AMSFinanceAuthenticateResponse *cachedAuthenticateResponse;
@property (retain) AMSFinanceDialogResponse *cachedDialogResponse;
@property (retain) AMSFinancePaymentSheetResponse *cachedPaymentSheetResponse;
@property (readonly) long long dialogKind;
@property (retain) NSDictionary *responseDictionary;
@property (retain) AMSURLTaskInfo *taskInfo;
@property (readonly) ACAccount *account;
@property (readonly) NSArray *actions;
@property (readonly) NSArray *pingURLs;
@property (readonly) NSError *serverError;
@property (readonly) BOOL supportedProtocolVersion;
@property (readonly) NSURL *versionMismatchURL;

+ (id)valueForProtocolKey:(id)a0 inResponse:(id)a1;

- (void).cxx_destruct;
- (id)_valueForProtocolKey:(id)a0;
- (id)_performerForAuthenticate;
- (id)_performerForDialog;
- (id)_performerForPaymentSheetWithDelegateAuthentication:(BOOL)a0;
- (id)_performerForActionDictionary;
- (id)_performerForCreditDisplay;
- (id)initWithTaskInfo:(id)a0 decodedObject:(id)a1;

@end
