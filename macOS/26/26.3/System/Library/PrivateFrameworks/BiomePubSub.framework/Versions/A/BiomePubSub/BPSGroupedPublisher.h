@class BPSMulticast, NSString;

@interface BPSGroupedPublisher : NSObject <BPSPublisher, BPSConnectablePublisher>

@property (retain, nonatomic) BPSMulticast *multicast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribe:(id)a0;
- (void)connect;
- (id)initWithUpstream:(id)a0 createSubject:(id /* block */)a1;
- (id)subscribeOnKey:(id)a0;
- (void).cxx_destruct;
- (id)aggregateWithInitial:(id)a0 nextPartialResult:(id /* block */)a1;

@end
