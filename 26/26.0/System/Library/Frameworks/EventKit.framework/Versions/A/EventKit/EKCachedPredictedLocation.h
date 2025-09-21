@class NSString, EKStructuredLocation;

@interface EKCachedPredictedLocation : NSObject {
    NSString *_eventTitle;
    NSString *_locationWithoutPrediction;
    NSString *_calendarIdentifier;
    EKStructuredLocation *_cachedPrediction;
    unsigned long long _predictionExpiration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)emptyPrediction;
+ (id)cachedPredictedLocationWithTitle:(id)a0 location:(id)a1 calendar:(id)a2;

- (void).cxx_destruct;
- (void)_freeze;
- (void)_updatePredictedLocation:(id)a0;
- (id)fetchPredictedLocationWithDelegate:(id)a0;
- (id)frozenCopy;
- (id)initWithTitle:(id)a0 location:(id)a1 calendar:(id)a2;

@end
