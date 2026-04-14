@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (void)setOwner:(id)a0;
- (id)UUID;
- (void)setCount:(unsigned long long)a0;
- (void)setInterval:(long long)a0;
- (void)setEndDate:(id)a0;
- (long long)interval;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (unsigned long long)count;
- (id)endDate;
- (id)owner;
- (int)entityType;
- (id)description;
- (id)specifier;
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
