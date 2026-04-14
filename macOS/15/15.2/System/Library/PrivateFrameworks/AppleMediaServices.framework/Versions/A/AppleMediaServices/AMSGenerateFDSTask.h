@class NSString, AMSFDSRequest, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSGenerateFDSTask : AMSTask

@property (readonly) AMSFDSRequest *request;
@property (readonly) ACAccount *account;
@property (readonly) unsigned long long action;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) BOOL deviceSupportsAFDSValues;
@property (readonly) BOOL deviceSupportsAFDSValuesV2;
@property (readonly) NSString *logKey;
@property (readonly) NSNumber *purchaseIdentifier;

+ (BOOL)deviceSupportsAFDSPaidODIWithBag:(id)a0 logKey:(id)a1;

- (void).cxx_destruct;
- (id)runTask;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;

@end
