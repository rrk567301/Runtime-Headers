@class NSString, NSUUID, DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *redactedDescription;
@property (readonly, nonatomic) unsigned long long resolutionReason;
@property (readonly, nonatomic) long long intelligentBehavior;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, copy) DNDClientEventDetails *eventDetails;
@property (readonly) unsigned long long interruptionSuppression;

- (id)_descriptionForRedacted:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithEventDetails:(id)a0 interruptionSuppression:(unsigned long long)a1 intelligentBehavior:(long long)a2 resolutionReason:(unsigned long long)a3 activeModeUUID:(id)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
