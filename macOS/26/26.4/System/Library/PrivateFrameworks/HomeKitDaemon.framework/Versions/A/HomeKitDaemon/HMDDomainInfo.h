@class HMFTimer, NSHashTable;
@protocol HMDStatusChannelPayloadPublisher;

@interface HMDDomainInfo : NSObject {
    NSHashTable *_observers;
}

@property (weak, nonatomic) id<HMDStatusChannelPayloadPublisher> publisher;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long currentPublishCount;
@property (retain, nonatomic) HMFTimer *resetTimer;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublisher:(id)a0;

@end
