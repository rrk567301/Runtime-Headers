@class GEOObserverHashTable, NSDate;
@protocol MNTimeProvider;

@interface MNTimeManager : NSObject {
    GEOObserverHashTable *_timeManagerObservers;
}

@property (class, readonly, nonatomic) double currentTime;
@property (class, readonly, nonatomic) NSDate *currentDate;

@property (retain, nonatomic) id<MNTimeProvider> provider;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)registerObserver:(id)a0;
- (void)_resetToDefaultProvider;

@end
