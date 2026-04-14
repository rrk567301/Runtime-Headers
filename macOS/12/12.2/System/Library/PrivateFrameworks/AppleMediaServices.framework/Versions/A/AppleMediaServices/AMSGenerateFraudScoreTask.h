@class NSString, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSGenerateFraudScoreTask : AMSTask

@property (readonly) ACAccount *account;
@property (readonly) unsigned long long action;
@property (readonly) id<AMSBagProtocol> bag;
@property (readonly) BOOL deviceSupportsFraudScores;
@property (readonly) BOOL deviceSupportsFraudScoresV2;
@property (readonly) NSString *logKey;
@property (readonly) NSNumber *purchaseIdentifier;

+ (BOOL)deviceSupportsFraudScoresV2WithBag:(id)a0 logKey:(id)a1;

- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 account:(id)a1 purchaseIdentifier:(id)a2 bag:(id)a3 logKey:(id)a4;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)runTask;

@end
