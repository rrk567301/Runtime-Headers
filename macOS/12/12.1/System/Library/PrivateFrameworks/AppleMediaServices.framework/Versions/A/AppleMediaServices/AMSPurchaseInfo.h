@class NSString, NSURL, NSMutableDictionary, AMSBuyParams, NSDictionary, ACAccount, AMSPurchase, AMSProcessInfo;
@protocol AMSPurchaseDelegate;

@interface AMSPurchaseInfo : NSObject

@property (retain) ACAccount *account;
@property (retain) NSMutableDictionary *additionalHeaders;
@property BOOL addKBSync;
@property (retain) AMSBuyParams *buyParams;
@property (readonly) NSString *clientCorrelationKey;
@property (readonly) AMSProcessInfo *clientInfo;
@property (retain) id<AMSPurchaseDelegate> delegate;
@property (retain) NSDictionary *dialog;
@property (retain) NSString *dialogId;
@property BOOL hasBeenAuthedForBuy;
@property BOOL hasRetriedOriginalOwnerAccount;
@property (retain) NSURL *paymentServicesURL;
@property (retain) NSString *paymentToken;
@property (readonly) AMSPurchase *purchase;

- (id)description;
- (void).cxx_destruct;
- (id)_purchaseStringForType:(long long)a0;
- (id)initWithPurchase:(id)a0;

@end
