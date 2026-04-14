@class GEOArrivalRegion, MNDispatchTimer;
@protocol MNArrivalRegionTimerDelegate;

@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion *_arrivalRegion;
    MNDispatchTimer *_timer;
}

@property (weak, nonatomic) id<MNArrivalRegionTimerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithArrivalRegion:(id)a0;
- (void)updateForLocation:(id)a0;

@end
