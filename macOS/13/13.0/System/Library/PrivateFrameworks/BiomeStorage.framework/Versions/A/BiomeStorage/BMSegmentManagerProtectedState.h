@class NSMutableDictionary, NSMutableOrderedSet;

@interface BMSegmentManagerProtectedState : NSObject {
    BOOL _canReadOrPruneData;
    NSMutableOrderedSet *_segmentNames;
    NSMutableDictionary *_segmentFileHandles;
}

- (void).cxx_destruct;
- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;

@end
