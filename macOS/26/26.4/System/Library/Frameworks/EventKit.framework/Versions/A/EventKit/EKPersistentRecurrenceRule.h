@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)defaultPropertiesToLoad;

- (id)specifier;
- (void)setCount:(unsigned long long)a0;
- (void)setEndDate:(id)a0;
- (void)setInterval:(long long)a0;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)owner;
- (void)setOwner:(id)a0;
- (long long)interval;
- (unsigned long long)count;
- (void)setUUID:(id)a0;
- (id)description;
- (id)endDate;
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
