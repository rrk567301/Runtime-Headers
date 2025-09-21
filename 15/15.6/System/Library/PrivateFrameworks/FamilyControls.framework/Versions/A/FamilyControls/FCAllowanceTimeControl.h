@interface FCAllowanceTimeControl : FCTimeControl

@property int secondsPerDay;

+ (id)allowanceFromDictionary:(id)a0;
+ (id)allowanceWithRange:(long long)a0 secondsPerDay:(int)a1 enabled:(char)a2;
+ (id)weekdayDefault;
+ (id)weekendDefault;

- (void)dealloc;
- (id)description;
- (id)plistRepresentation;
- (char)dateIsInEffect:(id)a0;
- (id)initWithRange:(long long)a0 secondsPerDay:(int)a1;

@end
