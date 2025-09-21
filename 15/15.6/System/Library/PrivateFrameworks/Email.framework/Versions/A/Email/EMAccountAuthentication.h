@protocol EDAccountFactory;

@interface EMAccountAuthentication : NSObject

@property (readonly, nonatomic) id<EDAccountFactory> accountFactory;

+ (id)log;

- (void).cxx_destruct;
- (char)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)a0;
- (char)_hostnamesHaveSameTopLevelDomain:(id)a0 deliveryAccount:(id)a1;
- (char)_shouldAutoUpdateDeliveryAccount:(id)a0 forChangedReceivingAccount:(id)a1;
- (char)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)a0;
- (id)initWithAccountFactory:(id)a0;
- (char)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)a0;
- (char)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)a0;

@end
