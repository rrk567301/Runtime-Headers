@class NSString, NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <CTXPCLogging, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *ct_shortName;
@property (readonly, nonatomic) NSString *ct_shortDescription;
@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSArray *subscriptionsInUse;
@property (retain, nonatomic) NSArray *subscriptionsValid;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;

@end
