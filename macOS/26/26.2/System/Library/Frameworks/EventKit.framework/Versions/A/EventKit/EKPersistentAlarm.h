@interface EKPersistentAlarm : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;

- (void)setEmailAddress:(id)a0;
- (id)emailAddress;
- (void)setCalendarItemOwner:(id)a0;
- (void)setType:(long long)a0;
- (void)setRelativeOffset:(id)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)originalAlarm;
- (id)acknowledgedDate;
- (id)urlWrapper;
- (id)absoluteDate;
- (id)relativeOffset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)semanticIdentifier;
- (void)setOriginalAlarm:(id)a0;
- (BOOL)isDefaultAlarm;
- (void)setProximity:(long long)a0;
- (long long)type;
- (long long)proximity;
- (id)snoozedAlarmsSet;
- (int)entityType;
- (id)description;
- (id)UUID;
- (id)externalData;
- (void)setUrlWrapper:(id)a0;
- (id)calendarItemOwner;
- (id)structuredLocation;
- (void)setUUID:(id)a0;
- (void)setCalendarOwner:(id)a0;
- (id)calendarOwner;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setAcknowledgedDate:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (void)setExternalData:(id)a0;
- (void)setAbsoluteDate:(id)a0;

@end
