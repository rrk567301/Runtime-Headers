@class NSMutableDictionary, NSMutableOrderedSet;

@interface BMStreamDatastoreDeviceLockState : NSObject

@property (nonatomic) BOOL canReadOrPruneData;
@property (retain, nonatomic) NSMutableOrderedSet *segmentNames;
@property (retain, nonatomic) NSMutableDictionary *segmentFileHandles;

- (void).cxx_destruct;
- (id)initWithDeviceStateIsUnlocked:(BOOL)a0;

@end
