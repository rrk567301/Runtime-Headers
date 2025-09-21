@class NSNumber, NSDateComponents, NSString;

@interface PKFelicaPassProperties : PKTransitPassProperties <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic, getter=isShinkansenTicketActive) char shinkansenTicketActive;
@property (nonatomic, getter=isGreenCarTicketUsed) char greenCarTicketUsed;
@property (nonatomic, getter=isInShinkansenStation) char inShinkansenStation;
@property (nonatomic, getter=isBalanceAllowedForCommute) char balanceAllowedForCommute;
@property (nonatomic, getter=isLowBalanceGateNotificationEnabled) char lowBalanceGateNotificationEnabled;
@property (copy, nonatomic) NSDateComponents *shinkansenValidityStartDate;
@property (copy, nonatomic) NSNumber *shinkansenValidityTerm;
@property (copy, nonatomic) NSString *shinkansenOriginStation;
@property (copy, nonatomic) NSString *shinkansenDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenArrivalTime;
@property (copy, nonatomic) NSString *shinkansenTrainName;
@property (copy, nonatomic) NSNumber *shinkansenCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSeatNumber;
@property (copy, nonatomic) NSString *shinkansenSecondaryOriginStation;
@property (copy, nonatomic) NSString *shinkansenSecondaryDestinationStation;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryDepartureTime;
@property (copy, nonatomic) NSDateComponents *shinkansenSecondaryArrivalTime;
@property (copy, nonatomic) NSString *shinkansenSecondaryTrainName;
@property (copy, nonatomic) NSNumber *shinkansenSecondaryCarNumber;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatRow;
@property (copy, nonatomic) NSNumber *shinkansenSecondarySeatNumber;
@property (copy, nonatomic) NSString *greenCarOriginStation;
@property (copy, nonatomic) NSString *greenCarDestinationStation;
@property (copy, nonatomic) NSDateComponents *greenCarValidityStartDate;
@property (nonatomic) char hasGreenCarTicket;
@property (nonatomic) char hasShinkansenTicket;

+ (Class)equalityClass;
+ (id)passPropertiesForPass:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_stringForRow:(id)a0 seat:(id)a1;
- (id)displayableShinkansenSeat;
- (id)displayableShinkansenSecondarySeat;
- (id)initWithFelicaAppletState:(id)a0 paymentApplication:(id)a1;
- (id)initWithTransitAppletState:(id)a0 paymentApplication:(id)a1 fieldCollection:(id)a2;
- (char)isInStation;

@end
