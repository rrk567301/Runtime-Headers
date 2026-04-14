@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (Class)alternateUniverseClass;

- (void)setCount:(unsigned long long)a0;
- (unsigned long long)count;
- (id)endDate;
- (void)setOwner:(id)a0;
- (void)setInterval:(long long)a0;
- (void)setEndDate:(id)a0;
- (long long)interval;
- (id)UUID;
- (id)description;
- (id)specifier;
- (void)setUUID:(id)a0;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)entityType;
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
