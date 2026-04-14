@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (Class)alternateUniverseClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;

- (void)setEndDate:(id)a0;
- (id)specifier;
- (void)setCount:(unsigned long long)a0;
- (id)owner;
- (unsigned long long)count;
- (void)setOwner:(id)a0;
- (void)setInterval:(long long)a0;
- (id)endDate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)interval;
- (int)entityType;
- (id)description;
- (id)UUID;
- (void)setUUID:(id)a0;
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
