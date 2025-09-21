@class NSMutableArray;

@interface HMDAnalyticsPredicateData : HMFObject {
    char _containsCalendarTime;
    char _containsCharacteristicValue;
    char _containsSignificantTime;
    char _containsSignificantTimeOffset;
    NSMutableArray *_presenceEvents;
}

- (id)init;
- (void).cxx_destruct;

@end
