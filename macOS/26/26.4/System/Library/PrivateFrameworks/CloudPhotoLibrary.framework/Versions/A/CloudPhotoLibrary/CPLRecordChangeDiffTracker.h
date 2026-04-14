@class NSArray, CPLDiffTracker;

@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker *_diffTracker;
    unsigned long long _trackingChangeType;
}

@property (readonly, nonatomic) NSArray *updatedProperties;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)redactedDescription;
- (id)initWithTrackingChangeTypeMask:(unsigned long long)a0;
- (void)withTrackerForChangeType:(unsigned long long)a0 block:(id /* block */)a1;
- (BOOL)areObjectsDifferentOnProperty:(id)a0 changeType:(unsigned long long)a1;

@end
