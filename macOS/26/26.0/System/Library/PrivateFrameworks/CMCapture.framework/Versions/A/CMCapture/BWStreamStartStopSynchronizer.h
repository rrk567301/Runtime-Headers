@class NSArray, NSDictionary, BWFigVideoCaptureStream;

@interface BWStreamStartStopSynchronizer : NSObject {
    NSDictionary *_streamStatesByPortType;
    float _timeoutInSeconds;
    BOOL _masterStartedGroupEntered;
    BWFigVideoCaptureStream *_synchronizationPrimary;
    NSArray *_synchronizationSlavesOrderedByPriority;
}

@property (nonatomic) BOOL waitForMasterAEToSettle;
@property (retain, nonatomic) NSArray *synchronizationSlavesOrderedByPriority;

+ (void)initialize;

- (void)dealloc;
- (BOOL)streamWillStop:(id)a0;
- (void)streamDidStop:(id)a0;
- (id)initWithStreams:(id)a0 synchronizationPrimary:(id)a1 timeoutInSeconds:(float)a2;
- (void)streamDidStart:(id)a0;
- (BOOL)streamWillStart:(id)a0;

@end
