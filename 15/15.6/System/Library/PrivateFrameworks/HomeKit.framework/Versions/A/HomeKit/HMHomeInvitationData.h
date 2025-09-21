@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long invitationState;

+ (id)homeInvitationStateDescription:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInvitationState:(long long)a0 invitationIdentifier:(id)a1 endDate:(id)a2;

@end
