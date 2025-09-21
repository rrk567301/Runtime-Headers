@class _BPSMerged, NSString;

@interface _BPSMergedSide : NSObject <BPSSubscriber>

@property (retain, nonatomic) _BPSMerged *merger;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithIndex:(long long)a0 merger:(id)a1;
- (void)receiveSubscription:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;

@end
