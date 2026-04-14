@interface EKPersistentAlarm : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (id)originalAlarm;
- (void)setEmailAddress:(id)a0;
- (int)entityType;
- (long long)type;
- (id)structuredLocation;
- (void)setStructuredLocation:(id)a0;
- (void)setUUID:(id)a0;
- (id)emailAddress;
- (void)setCalendarOwner:(id)a0;
- (id)snoozedAlarmsSet;
- (void)setUrlWrapper:(id)a0;
- (id)absoluteDate;
- (id)calendarOwner;
- (id)urlWrapper;
- (id)calendarItemOwner;
- (id)relativeOffset;
- (void)setCalendarItemOwner:(id)a0;
- (void)setType:(long long)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)acknowledgedDate;
- (id)description;
- (void)setAbsoluteDate:(id)a0;
- (id)externalData;
- (void)setAcknowledgedDate:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setOriginalAlarm:(id)a0;
- (id)semanticIdentifier;
- (BOOL)isDefaultAlarm;
- (void)setExternalData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setProximity:(long long)a0;
- (void)setRelativeOffset:(id)a0;
- (id)UUID;
- (long long)proximity;

@end
