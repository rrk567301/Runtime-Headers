@class NSDecimalNumber, NSString;

@interface PKSuicaPassProperties : PKTransitPassProperties

@property (readonly, copy, nonatomic) NSDecimalNumber *transitBalance;
@property (readonly, copy, nonatomic) NSString *transitBalanceCurrencyCode;
@property (readonly, nonatomic, getter=isInStation) char inStation;
@property (readonly, nonatomic, getter=isInShinkansenStation) char inShinkansenStation;
@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) char balanceAllowedForCommute;
@property (readonly, nonatomic, getter=isLowBalanceGateNotificationEnabled) char lowBalanceGateNotificationEnabled;
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) char greenCarTicketUsed;
@property (readonly, nonatomic, getter=isBlacklisted) char blacklisted;

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)_initWithProperties:(id)a0;

@end
