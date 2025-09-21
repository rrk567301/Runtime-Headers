@class CTDataConnectionAvailabilityStatus, CTXPCServiceSubscriptionContext, NSNumber, CTDataConnectionStatus;

@interface CTTetheringStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSNumber *carrierEnabled;
@property (retain, nonatomic) NSNumber *userAuthenticated;
@property (retain, nonatomic) NSNumber *asserted;
@property (retain, nonatomic) NSNumber *activationFailure;
@property (retain, nonatomic) NSNumber *misPdpMaxHosts;
@property (retain, nonatomic) CTDataConnectionAvailabilityStatus *connectionAvailabilityStatus;
@property (retain, nonatomic) CTDataConnectionStatus *connectionStatus;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
