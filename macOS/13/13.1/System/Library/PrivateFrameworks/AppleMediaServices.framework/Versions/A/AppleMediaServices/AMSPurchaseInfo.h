@class NSString, NSURL, AMSPurchaseTask, NSMutableDictionary, AMSBuyParams, ACAccount, NSDictionary, LAContext, AMSPurchase, AMSProcessInfo;
@protocol AMSPurchaseDelegate;

@interface AMSPurchaseInfo : NSObject

@property (retain) ACAccount *account;
@property (weak) AMSPurchaseTask *activePurchaseTask;
@property (retain) NSMutableDictionary *additionalHeaders;
@property BOOL addKBSync;
@property (retain) AMSBuyParams *buyParams;
@property (readonly) NSString *clientCorrelationKey;
@property (readonly) AMSProcessInfo *clientInfo;
@property (weak) id<AMSPurchaseDelegate> delegate;
@property (retain) NSDictionary *dialog;
@property (retain) NSString *dialogId;
@property BOOL hasBeenAuthedForBuy;
@property BOOL hasRetriedOriginalOwnerAccount;
@property (retain) NSDictionary *idmsTokens;
@property (retain) LAContext *localAuthContext;
@property (retain) NSURL *paymentServicesURL;
@property (retain) NSString *paymentToken;
@property (readonly) AMSPurchase *purchase;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPurchase:(id)a0;
- (id)_purchaseStringForType:(long long)a0;

@end
