@class NSString, AVRoutingWeakReference, AVOutputContextCommunicationChannel, AVFigRoutingContextOutputContextImpl, NSObject;
@protocol OS_dispatch_queue;

@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager> {
    struct OpaqueFigRoutingContext { } *_routingContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFString { } *_outgoingCommChannelUUID;
    struct __CFDictionary { } *_communicationChannelsForUUIDs;
    AVRoutingWeakReference *_weakObserver;
}

@property (weak) AVFigRoutingContextOutputContextImpl *parentOutputContextImpl;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openCommunicationChannelWithOptions:(id)a0 error:(id *)a1;
- (void)_didReceiveData:(struct __CFData { } *)a0 fromCommChannelUUID:(struct __CFString { } *)a1;
- (void)dealloc;
- (void)didCloseCommChannelUUID:(struct __CFString { } *)a0;
- (id)init;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext { } *)a0;
- (void).cxx_destruct;

@end
