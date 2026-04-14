@interface FCAllowanceTimeControl : FCTimeControl

@property int secondsPerDay;

+ (id)allowanceFromDictionary:(id)a0;
+ (id)allowanceWithRange:(long long)a0 secondsPerDay:(int)a1 enabled:(BOOL)a2;
+ (id)weekdayDefault;
+ (id)weekendDefault;

- (id)plistRepresentation;
- (void)dealloc;
- (id)description;
- (BOOL)dateIsInEffect:(id)a0;
- (id)initWithRange:(long long)a0 secondsPerDay:(int)a1;

@end
