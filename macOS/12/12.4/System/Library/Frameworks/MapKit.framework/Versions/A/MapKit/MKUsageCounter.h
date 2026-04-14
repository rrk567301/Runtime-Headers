@class NSMutableSet;

@interface MKUsageCounter : NSObject {
    NSMutableSet *_countedEventsSet;
}

+ (id)sharedCounter;

- (void).cxx_destruct;
- (void)count:(unsigned long long)a0;
- (id)fieldNameForType:(unsigned long long)a0;
- (void)createCountedEventsSetIfNeeded;
- (void)countUsageOfTypeIfNeeded:(unsigned long long)a0;

@end
