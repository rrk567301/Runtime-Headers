@class NSMutableSet;

@interface MDSReadCopyUpdate : NSObject {
    NSMutableSet *_queueTokenSet;
    id _resource;
}

- (void)dealloc;
- (id)init;
- (void)registerResourceConsumerQueueToken:(unsigned long long)a0;
- (void)unregisterResourceConsumerQueueToken:(unsigned long long)a0;
- (void)updateResource:(id)a0;

@end
