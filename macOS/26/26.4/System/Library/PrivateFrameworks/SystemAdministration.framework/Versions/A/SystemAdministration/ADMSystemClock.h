@interface ADMSystemClock : NSObject

+ (id)sharedSystemClock;

- (void)setTime:(long long)a0;
- (void)setTimeZone:(id)a0;

@end
