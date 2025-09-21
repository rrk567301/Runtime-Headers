@class _TtC18PodcastsFoundation17FutureDateChecker;

@interface PodcastsFoundation.FutureDateChecker : NSObject {
    void /* unknown type, empty encoding */ leniency;
    void /* unknown type, empty encoding */ assertionLeniency;
    void /* unknown type, empty encoding */ assertOnFutures;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation17FutureDateChecker *sharedInstance;
@property (class, nonatomic, readonly) _TtC18PodcastsFoundation17FutureDateChecker *lenientSharedInstance;
@property (class, nonatomic) char sharedInstanceShouldAssertTestsOnly;

- (id)init;
- (void).cxx_destruct;
- (char)isFutureWithDate:(id)a0 boundBy:(id)a1;
- (char)isFutureWithTimestamp:(double)a0;
- (char)isFutureWithTimestamp:(double)a0 boundBy:(double)a1;
- (double)timestamp:(double)a0 boundBy:(double)a1;
- (double)timestampBoundByNow:(double)a0;
- (double)timestampBoundByNowForDate:(id)a0;
- (double)timestampForDate:(id)a0 boundBy:(id)a1;

@end
