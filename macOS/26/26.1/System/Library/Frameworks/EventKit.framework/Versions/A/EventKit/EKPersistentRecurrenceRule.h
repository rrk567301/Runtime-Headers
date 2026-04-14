@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (long long)interval;
- (void)setUUID:(id)a0;
- (void)setCount:(unsigned long long)a0;
- (void)setEndDate:(id)a0;
- (id)endDate;
- (void)setOwner:(id)a0;
- (id)specifier;
- (void)setInterval:(long long)a0;
- (id)owner;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)UUID;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (void)setCachedEndDate:(id)a0;
- (void)setCachedEndDateTimeZone:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setFrequencyRaw:(int)a0;
- (void)setSpecifier:(id)a0;

@end
