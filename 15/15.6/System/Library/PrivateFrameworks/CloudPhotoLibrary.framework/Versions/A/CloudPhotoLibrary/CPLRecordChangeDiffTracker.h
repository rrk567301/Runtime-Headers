@class NSArray, CPLDiffTracker;

@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker *_diffTracker;
    unsigned long long _trackingChangeType;
}

@property (readonly, nonatomic) NSArray *updatedProperties;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)withTrackerForChangeType:(unsigned long long)a0 block:(id /* block */)a1;
- (id)initWithTrackingChangeTypeMask:(unsigned long long)a0;
- (char)areObjectsDifferentOnProperty:(id)a0 changeType:(unsigned long long)a1;

@end
