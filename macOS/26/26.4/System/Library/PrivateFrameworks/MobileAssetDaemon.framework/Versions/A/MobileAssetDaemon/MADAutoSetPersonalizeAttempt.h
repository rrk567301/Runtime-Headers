@class MADAutoSetDescriptor, NSMutableArray;

@interface MADAutoSetPersonalizeAttempt : NSObject

@property (retain, nonatomic) MADAutoSetDescriptor *setDescriptor;
@property (readonly, nonatomic) BOOL secureMonitorTriggered;
@property (retain, nonatomic) NSMutableArray *checkAtomicNoWaitRequests;
@property (retain, nonatomic) NSMutableArray *lockAtomicRequests;

- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithSetDescriptor:(id)a0 forClientRequestEventInformation:(id)a1;

@end
