@class NSSet, PKPeerPaymentPreferencesProfileAppearance, NSDate;

@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresConfirmation;
@property (nonatomic) BOOL canReceiveFormalPaymentRequests;
@property (copy, nonatomic) NSSet *notifications;
@property (copy, nonatomic) NSSet *restrictions;
@property (copy, nonatomic) PKPeerPaymentPreferencesProfileAppearance *profileAppearance;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) double proactiveFetchPeriod;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSendRestrictionType:(unsigned long long)a0 altDSID:(id)a1;
- (id)initWithDictionary:(id)a0 lastUpdated:(id)a1;
- (void)addReceiveRestrictionType:(unsigned long long)a0 altDSID:(id)a1;
- (void)didUpdateNotification:(id)a0;
- (BOOL)isEqualToPreferences:(id)a0;
- (BOOL)isOutOfDate;
- (id)notificationWithType:(unsigned long long)a0 altDSID:(id)a1;
- (id)restrictionsForAltDSID:(id)a0;
- (id)sendRestrictionWithType:(unsigned long long)a0 altDSID:(id)a1;

@end
