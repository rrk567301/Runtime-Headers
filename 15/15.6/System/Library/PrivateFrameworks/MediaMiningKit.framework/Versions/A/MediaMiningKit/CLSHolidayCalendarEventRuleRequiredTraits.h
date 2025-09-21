@class NSDictionary;

@interface CLSHolidayCalendarEventRuleRequiredTraits : CLSHolidayCalendarEventRuleTraits

@property (nonatomic) char mustContainMePerson;
@property (nonatomic) unsigned long long minimumPeopleCount;
@property (retain, nonatomic) NSDictionary *defaultScenesWithImportanceString;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long eventCategory;
@property (readonly, nonatomic) char isCelebration;
@property (readonly, nonatomic) char allowApproximateDateCalculation;

+ (id)_locationTraitDebugStringForTrait:(unsigned long long)a0;
+ (id)_peopleTraitDebugStringForTrait:(unsigned long long)a0;
+ (unsigned long long)importanceEnumForImportanceString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;
- (char)evaluateWithTraits:(id)a0 evaluateLocationTraits:(char)a1;
- (unsigned long long)importanceForScene:(id)a0;
- (char)peopleCountRangeIsRequired;

@end
