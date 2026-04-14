@class NSString, BPSSubscription, BPSPublisher, BMStreamVirtualTable;

@interface BMPublisherVirtualTableCursor : NSObject <BPSSubscriber>

@property (readonly, nonatomic) BMStreamVirtualTable *virtualTable;
@property (readonly, nonatomic) BPSPublisher *publisher;
@property (readonly, nonatomic) BPSSubscription *subscription;
@property (readonly, nonatomic) id rowObject;
@property (readonly, nonatomic) long long rowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestNextEvents;
- (void)receivedEvent:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)subscribeTo:(id)a0;
- (void)close;
- (void)advance;
- (void)_advance;
- (void)_resetWithPublisher:(id)a0;
- (id)initWithVirtualTable:(id)a0;
- (void)resetWithOptions:(id)a0;

@end
