@class NSMutableDictionary, TRITrackingId, NSDate, NSMutableArray;

@interface PPTrialWrapperGuardedData : NSObject {
    TRITrackingId *trackingId;
    NSMutableArray *notificationTokens;
    NSMutableDictionary *pathOverrides;
    NSDate *mostRecentUpdateDate;
}

- (void).cxx_destruct;

@end
