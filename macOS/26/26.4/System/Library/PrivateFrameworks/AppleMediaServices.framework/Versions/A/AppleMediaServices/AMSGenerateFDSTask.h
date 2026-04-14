@class NSString, AMSFDSRequest, ACAccount, NSNumber, AMSPurchaseInfo;
@protocol AMSBagProtocol;

@interface AMSGenerateFDSTask : AMSTask

@property (class, readonly) BOOL deviceSupportsAFDSValues;
@property (class, readonly) BOOL deviceSupportsODIValues;

@property (readonly) AMSFDSRequest *request;
@property (readonly) ACAccount *account;
@property (readonly) unsigned long long action;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) NSString *logKey;
@property (readonly) NSNumber *purchaseIdentifier;
@property (readonly) AMSPurchaseInfo *purchaseInfo;

+ (BOOL)deviceSupportsFreeODI;

- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)runTask;
- (unsigned long long)_actionForFreePurchase:(BOOL)a0;
- (id)_actionPromise;

@end
