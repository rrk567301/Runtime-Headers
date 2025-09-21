@class BKSHIDEventDispatchingTarget, NSString, NSArray, BKSEventDeferringChainIdentity, BKEventDeferringEnvironmentGraph, BKSHIDEventSenderDescriptor, NSSet;

@interface BKEventDeliveryChain : NSObject <BSDescriptionStreaming> {
    BKSEventDeferringChainIdentity *_identity;
    BKEventDeferringEnvironmentGraph *_environmentGraph;
    BKSHIDEventDispatchingTarget *_dispatchTarget;
    BKSHIDEventSenderDescriptor *_senderDescriptor;
    NSArray *_deferringPath;
    NSSet *_modalities;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToStream:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
