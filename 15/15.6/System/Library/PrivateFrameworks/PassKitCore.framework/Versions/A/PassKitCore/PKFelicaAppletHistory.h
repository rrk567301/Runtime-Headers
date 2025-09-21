@class NSString, NSSet, PKFelicaGreenCarTicket, NSNumber, PKFelicaShinkansenTicket;

@interface PKFelicaAppletHistory : PKTransitAppletHistory {
    NSSet *_existingKeys;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *transactionID;
@property (readonly, copy, nonatomic) NSNumber *SPID;
@property (readonly, nonatomic) long long transactionType;
@property (readonly, nonatomic, getter=isInShinkansenStation) BOOL inShinkansenStation;
@property (readonly, nonatomic, getter=isShinkansenTicketActive) BOOL shinkansenTicketActive;
@property (readonly, nonatomic, getter=isGreenCarTicketUsed) BOOL greenCarTicketUsed;
@property (readonly, nonatomic, getter=isBalanceAllowedForCommute) BOOL balanceAllowedForCommute;
@property (readonly, nonatomic, getter=isLowBalanceNotificationEnabled) BOOL lowBalanceNotificationEnabled;
@property (readonly, copy, nonatomic) PKFelicaShinkansenTicket *shinkansenTicket;
@property (readonly, nonatomic) PKFelicaGreenCarTicket *greenCarTicket;

+ (char)supportsSecureCoding;
+ (long long)appletTypeForDictionary:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addEnrouteTransitType:(id)a0;
- (id)initWithDictionary:(id)a0 source:(long long)a1;
- (char)isInStation;
- (void)sanitizeValuesWithState:(id)a0;

@end
