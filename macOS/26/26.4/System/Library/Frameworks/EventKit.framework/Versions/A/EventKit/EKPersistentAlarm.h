@interface EKPersistentAlarm : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (void)setEmailAddress:(id)a0;
- (void)setCalendarOwner:(id)a0;
- (void)setRelativeOffset:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)acknowledgedDate;
- (id)calendarOwner;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExternalData:(id)a0;
- (id)snoozedAlarmsSet;
- (id)originalAlarm;
- (BOOL)isDefaultAlarm;
- (long long)proximity;
- (void)setOriginalAlarm:(id)a0;
- (id)semanticIdentifier;
- (id)relativeOffset;
- (id)emailAddress;
- (void)setAbsoluteDate:(id)a0;
- (void)setType:(long long)a0;
- (long long)type;
- (void)setSnoozedAlarmsSet:(id)a0;
- (void)setProximity:(long long)a0;
- (void)setUUID:(id)a0;
- (id)description;
- (void)setUrlWrapper:(id)a0;
- (id)externalData;
- (id)structuredLocation;
- (id)absoluteDate;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (id)calendarItemOwner;
- (void)setAcknowledgedDate:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (id)urlWrapper;
- (id)UUID;

@end
