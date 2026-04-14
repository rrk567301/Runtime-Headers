@class FCTime;

@interface FCCurfewTimeControl : FCTimeControl

@property (retain) FCTime *start;
@property (retain) FCTime *end;

+ (id)weekdayDefault;
+ (id)weekendDefault;
+ (id)curfewWithRange:(long long)a0 start:(id)a1 end:(id)a2 enabled:(BOOL)a3;
+ (id)curfewFromDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (id)range;
- (id)plistRepresentation;
- (BOOL)dateIsInEffect:(id)a0;
- (id)initWithRange:(long long)a0 start:(id)a1 end:(id)a2;

@end
