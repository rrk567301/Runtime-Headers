@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)alternateUniverseClass;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)setOwner:(id)a0;
- (id)UUID;
- (id)specifier;
- (void)setCount:(unsigned long long)a0;
- (long long)interval;
- (void)setInterval:(long long)a0;
- (id)endDate;
- (id)owner;
- (void)setUUID:(id)a0;
- (void)setEndDate:(id)a0;
- (int)entityType;
- (int)frequencyRaw;
- (void)setFrequencyRaw:(int)a0;
- (id)cachedEndDate;
- (void)setCachedEndDate:(id)a0;
- (id)cachedEndDateTimeZone;
- (void)setCachedEndDateTimeZone:(id)a0;
- (long long)firstDayOfTheWeekRaw;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setSpecifier:(id)a0;

@end
