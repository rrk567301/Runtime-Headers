@class NSError, NSMutableDictionary, NSMutableOrderedSet;

@interface BMSegmentManagerProtectedState : NSObject {
    char _isDataAccessible;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
    NSError *_error;
}

- (void).cxx_destruct;
- (id)initWithDeviceStateIsUnlocked:(char)a0;

@end
