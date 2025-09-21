@interface REMTemplateContentAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long reminderCount;
@property (readonly, nonatomic) char hasDisplayDate;
@property (readonly, nonatomic) char hasHashtags;
@property (readonly, nonatomic) char hasLocationTriggersOrVehicleEventTriggers;
@property (readonly, nonatomic) char hasImageAttachments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReminderCount:(long long)a0 hasDisplayDate:(char)a1 hasHashtags:(char)a2 hasLocationTriggersOrVehicleEventTriggers:(char)a3 hasImageAttachments:(char)a4;

@end
