@interface IMAccountUtilities : NSObject

+ (char)_hasMadridIDSAccountForSending;
+ (char)_isApprovedForRelayWithAllAccounts:(id)a0 account:(id)a1;
+ (char)isAccountOperationalWithAllAccounts:(id)a0 account:(id)a1;
+ (char)isAccountRegistered:(id)a0;
+ (char)isAccountUsableForSendingWithAllAccounts:(id)a0 account:(id)a1;

@end
