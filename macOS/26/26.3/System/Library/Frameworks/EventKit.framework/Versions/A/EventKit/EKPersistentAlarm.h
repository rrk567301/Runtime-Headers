@interface EKPersistentAlarm : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (Class)alternateUniverseClass;

- (id)relativeOffset;
- (void)setType:(long long)a0;
- (long long)type;
- (id)emailAddress;
- (void)setOriginalAlarm:(id)a0;
- (BOOL)isDefaultAlarm;
- (void)setAbsoluteDate:(id)a0;
- (id)UUID;
- (void)setEmailAddress:(id)a0;
- (id)description;
- (void)setCalendarOwner:(id)a0;
- (id)absoluteDate;
- (void)setProximity:(long long)a0;
- (void)setUUID:(id)a0;
- (void)setStructuredLocation:(id)a0;
- (void)setRelativeOffset:(id)a0;
- (void)setUrlWrapper:(id)a0;
- (id)semanticIdentifier;
- (id)structuredLocation;
- (id)originalAlarm;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (id)calendarOwner;
- (void)setExternalData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)snoozedAlarmsSet;
- (void)setAcknowledgedDate:(id)a0;
- (int)entityType;
- (id)acknowledgedDate;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)externalData;
- (long long)proximity;
- (id)calendarItemOwner;
- (id)urlWrapper;

@end
