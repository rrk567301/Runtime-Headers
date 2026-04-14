@interface FCAllowanceTimeControl : FCTimeControl

@property int secondsPerDay;

+ (id)allowanceWithRange:(long long)a0 secondsPerDay:(int)a1 enabled:(BOOL)a2;
+ (id)allowanceFromDictionary:(id)a0;
+ (id)weekdayDefault;
+ (id)weekendDefault;

- (void)dealloc;
- (id)description;
- (id)plistRepresentation;
- (BOOL)dateIsInEffect:(id)a0;
- (id)initWithRange:(long long)a0 secondsPerDay:(int)a1;

@end
