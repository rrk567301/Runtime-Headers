@class NSError, NSMutableDictionary, NSMutableOrderedSet;

@interface BMSegmentManagerProtectedState : NSObject {
    BOOL _isDataAccessible;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
    NSError *_error;
}

- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;
- (void).cxx_destruct;

@end
