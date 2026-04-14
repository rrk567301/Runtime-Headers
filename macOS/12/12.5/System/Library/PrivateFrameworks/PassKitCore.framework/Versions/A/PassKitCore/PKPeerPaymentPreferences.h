@class NSSet, NSDate;

@interface PKPeerPaymentPreferences : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requiresConfirmation;
@property (nonatomic) BOOL canReceiveFormalPaymentRequests;
@property (copy, nonatomic) NSSet *notifications;
@property (copy, nonatomic) NSSet *restrictions;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (retain, nonatomic) NSDate *lastUpdated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 lastUpdated:(id)a1;
- (BOOL)isOutOfDate;
- (id)restrictionWithType:(unsigned long long)a0 altDSID:(id)a1;
- (void)removeRestrictionType:(unsigned long long)a0 altDSID:(id)a1;
- (id)notificationWithType:(unsigned long long)a0 altDSID:(id)a1;
- (BOOL)isEqualToPreferences:(id)a0;
- (void)addRestrictionType:(unsigned long long)a0 altDSID:(id)a1;
- (void)didUpdateNotification:(id)a0;

@end
