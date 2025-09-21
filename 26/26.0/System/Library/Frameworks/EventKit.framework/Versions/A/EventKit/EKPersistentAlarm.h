@interface EKPersistentAlarm : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (id)emailAddress;
- (id)UUID;
- (void)setOriginalAlarm:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (long long)proximity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (void)setAcknowledgedDate:(id)a0;
- (long long)type;
- (void)setEmailAddress:(id)a0;
- (id)structuredLocation;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)calendarItemOwner;
- (id)snoozedAlarmsSet;
- (void)setType:(long long)a0;
- (void)setAbsoluteDate:(id)a0;
- (int)entityType;
- (id)acknowledgedDate;
- (id)description;
- (void)setProximity:(long long)a0;
- (id)originalAlarm;
- (void)setUrlWrapper:(id)a0;
- (BOOL)isDefaultAlarm;
- (void)setCalendarOwner:(id)a0;
- (id)urlWrapper;
- (id)absoluteDate;
- (void)setRelativeOffset:(id)a0;
- (id)semanticIdentifier;
- (id)relativeOffset;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setExternalData:(id)a0;
- (id)externalData;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarOwner;

@end
