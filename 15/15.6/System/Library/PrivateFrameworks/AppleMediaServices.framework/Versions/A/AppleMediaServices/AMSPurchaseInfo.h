@class AMSPurchase, NSString, NSXPCListenerEndpoint, NSURL, AMSPurchaseTask, NSMutableDictionary, AMSBuyParams, ACAccount, NSDictionary, LAContext, NSNumber, AMSProcessInfo;
@protocol AMSPurchaseDelegate;

@interface AMSPurchaseInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSXPCListenerEndpoint *paymentViewServiceListener;
@property (retain) NSNumber *paymentMethodType;
@property (retain) ACAccount *account;
@property (weak) AMSPurchaseTask *activePurchaseTask;
@property (retain) NSMutableDictionary *additionalHeaders;
@property char addKBSync;
@property (retain) AMSBuyParams *buyParams;
@property (readonly) NSString *clientCorrelationKey;
@property (readonly) AMSProcessInfo *clientInfo;
@property (weak) id<AMSPurchaseDelegate> delegate;
@property (retain) NSDictionary *dialog;
@property (retain) NSString *dialogId;
@property char didShowPaymentSheet;
@property (retain) NSNumber *expressCheckoutMode;
@property (readonly, getter=isFree) char free;
@property char hasBeenAuthedForBuy;
@property char hasRetriedOriginalOwnerAccount;
@property (retain) NSNumber *hostProcessIdentifier;
@property (retain) NSDictionary *idmsTokens;
@property (retain) LAContext *localAuthContext;
@property (retain) NSURL *paymentServicesURL;
@property (retain) NSString *paymentToken;
@property (readonly) AMSPurchase *purchase;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_purchaseStringForType:(long long)a0;
- (id)initWithPurchase:(id)a0;

@end
