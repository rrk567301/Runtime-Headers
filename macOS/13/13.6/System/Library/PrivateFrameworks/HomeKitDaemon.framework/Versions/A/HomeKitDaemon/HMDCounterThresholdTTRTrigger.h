@class NSString;
@protocol RadarDialogPresenting;

@interface HMDCounterThresholdTTRTrigger : NSObject <HMDEventCounterObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *ttrCategory;
@property (readonly, weak, nonatomic) id<RadarDialogPresenting> dialogPresenter;
@property (readonly, nonatomic) long long activeThreshold;
@property (nonatomic) long long targetThreshold;

- (void).cxx_destruct;
- (id)initWithThreshold:(long long)a0 ttrCategory:(id)a1 dialogPresenter:(id)a2;
- (void)updatedCounterForEventName:(id)a0 fromOldValue:(unsigned long long)a1 toNewValue:(unsigned long long)a2;

@end
