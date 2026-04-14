@class NSMutableDictionary, NSData, NSMutableSet, NSObject, NSNumber;
@protocol OS_dispatch_queue, CATIDSServiceConnectionDataAggregationDelegate;

@interface CATIDSServiceConnectionDataAggregation : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSMutableDictionary *mDataSegmentsBySegmentNumber;
    NSMutableSet *mPendingSegmentNumbers;
    NSNumber *mStartingSequenceNumber;
    NSNumber *mTotalSegments;
    BOOL mPerformedInitialHydration;
}

@property (nonatomic) unsigned long long dataNumber;
@property (copy, nonatomic) NSData *totalData;
@property (weak, nonatomic) id<CATIDSServiceConnectionDataAggregationDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)hydrateWithContentIfNeededWithContent:(id)a0;
- (void)finishAggregating;
- (void)hydratePendingNumbersWithContent:(id)a0;
- (void)hydrateStartingSequenceNumber:(id)a0;
- (id)pendingSequenceNumbersDescription;
- (id)initWithWorkQueue:(id)a0;
- (void)updateWithDataContent:(id)a0;

@end
