@class NSPredicate, LNStaticDeferredLocalizedString;

@interface LNActionConstraint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *requirement;
@property (readonly, nonatomic) NSPredicate *condition;
@property (readonly, nonatomic) long long behavior;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *message;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequirement:(id)a0;
- (id)initWithRequirement:(id)a0 condition:(id)a1 behavior:(long long)a2 message:(id)a3;
- (id)initWithAvailabilityRequirement:(id)a0;
- (id)initWithEnablementRequirement:(id)a0 condition:(id)a1 message:(id)a2;
- (id)initWithEnablementRequirement:(id)a0 message:(id)a1;
- (id)initWithRequirement:(id)a0 condition:(id)a1;

@end
