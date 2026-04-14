@class NSString;

@interface EKPersistentAlarm : EKPersistentObject

@property (readonly, nonatomic) NSString *oldSemanticIdentifier;

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)alternateUniverseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (void)setType:(long long)a0;
- (id)UUID;
- (id)urlWrapper;
- (void)setUrlWrapper:(id)a0;
- (void)setUUID:(id)a0;
- (id)emailAddress;
- (id)externalData;
- (void)setEmailAddress:(id)a0;
- (long long)proximity;
- (id)structuredLocation;
- (void)setRelativeOffset:(id)a0;
- (id)relativeOffset;
- (id)absoluteDate;
- (void)setOriginalAlarm:(id)a0;
- (void)setAcknowledgedDate:(id)a0;
- (void)setAbsoluteDate:(id)a0;
- (BOOL)isDefaultAlarm;
- (id)originalAlarm;
- (id)acknowledgedDate;
- (int)entityType;
- (void)setProximity:(long long)a0;
- (void)setStructuredLocation:(id)a0;
- (void)setExternalData:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarItemOwner;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;

@end
