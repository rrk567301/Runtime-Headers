@class NSString, NSUUID, DNDClientEventDetails;

@interface DNDClientEventBehavior : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *redactedDescription;
@property (readonly, nonatomic) unsigned long long resolutionReason;
@property (readonly, copy, nonatomic) NSUUID *activeModeUUID;
@property (readonly, copy) DNDClientEventDetails *eventDetails;
@property (readonly) unsigned long long interruptionSuppression;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)initWithEventDetails:(id)a0 interruptionSuppression:(unsigned long long)a1 resolutionReason:(unsigned long long)a2 activeModeUUID:(id)a3;

@end
