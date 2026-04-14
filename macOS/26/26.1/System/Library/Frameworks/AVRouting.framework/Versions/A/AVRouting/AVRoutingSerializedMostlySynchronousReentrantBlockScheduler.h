@class NSString, NSArray;

@interface AVRoutingSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler> {
    struct OpaqueFigSimpleMutex { } *_ivarAccessLock;
    NSArray *_blocks;
    struct OpaqueFigReentrantMutex { } *_blockSerializationLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)scheduleBlock:(id /* block */)a0;
- (id)init;

@end
