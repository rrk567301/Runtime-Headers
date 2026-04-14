@class NSMapTable;

@interface AVBClockManager : NSObject {
    NSMapTable *_clockMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clockMapLock;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
}

+ (id)sharedClockManager;

- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)clockWithIdentifier:(unsigned long long)a0;
- (id)_clockWithIdentifier:(unsigned long long)a0;

@end
