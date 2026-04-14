@interface __NSTimeZone : NSTimeZone {
    struct __CFString { } *_name;
    struct __CFData { } *_data;
    void **_ucal;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _secondsFromGMT;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)name;
- (id)data;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;

@end
