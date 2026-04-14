@class NSMutableDictionary, BPSSink, NSNotificationCenter;

@interface SearchUIScreenTimeRequestStatusManager : NSObject

@property (class, readonly, nonatomic) SearchUIScreenTimeRequestStatusManager *sharedManager;

@property (retain, nonatomic) BPSSink *biomeSink;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSMutableDictionary *requestStatuses;

- (void)removeObserver:(id)a0;
- (id)addObserver:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithEvent:(id)a0;
- (void)setupSink;
- (int)statusForRequestID:(id)a0;

@end
