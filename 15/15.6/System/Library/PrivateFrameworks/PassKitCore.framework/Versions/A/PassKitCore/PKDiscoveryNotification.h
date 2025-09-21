@class NSString, NSDictionary, NSURL, NSDate;

@interface PKDiscoveryNotification : PKDiscoveryObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSDictionary *actionInfo;
@property (copy, nonatomic) NSString *titleKey;
@property (copy, nonatomic) NSString *messageKey;
@property (copy, nonatomic) NSString *actionTitleKey;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, copy, nonatomic) NSString *localizedActionTitle;
@property (readonly, nonatomic) long long passQualifier;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *discoveryCardIdentifier;
@property (retain, nonatomic) NSDate *scheduledDeliveryDate;
@property (nonatomic, getter=isDelivered) char delivered;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)scheduleDeliveryForCurrentDate:(id)a0;
- (char)isEqualForDisplayToNotification:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (void)updateForRuleResult:(char)a0;
- (void)updateWithNotification:(id)a0;

@end
