@class NSArray, NSString, NSMutableDictionary, MPRemoteCommandCenter, NSObject;
@protocol OS_dispatch_queue;

@interface MPRemoteCommand : NSObject <NSObject> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_handlers;
}

@property (weak, nonatomic) MPRemoteCommandCenter *commandCenter;
@property (readonly, nonatomic) char hasTargets;
@property (readonly, nonatomic, getter=isSupported) char supported;
@property (readonly, nonatomic, getter=isSupportedAndEnabled) char supportedAndEnabled;
@property (nonatomic, getter=isForceDisabled) char forceDisabled;
@property (nonatomic) long long disabledReason;
@property (copy, nonatomic) NSArray *disabledReasons;
@property (copy, nonatomic) NSArray *unsupportedReasons;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) unsigned int mediaRemoteCommandType;
@property (nonatomic) char skipSerializedEventDelivery;
@property (nonatomic, getter=isEnabled) char enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0;
- (id)_stateDumpObject;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)newCommandEvent;
- (id)_mediaRemoteCommandInfo;
- (id)_mediaRemoteCommandInfoOptions;
- (void)addTarget:(id)a0 action:(SEL)a1 usingExtendedStatus:(char)a2;
- (id)addTargetWithHandler:(id /* block */)a0;
- (id)commandInfoRepresentations;
- (void)invokeCommandWithEvent:(id)a0 completion:(id /* block */)a1;
- (id)newCommandEventWithCommandType:(unsigned int)a0 options:(id)a1;
- (id)newCommandEventWithContentItemIdentifier:(id)a0;
- (id)newCommandEventWithPlaybackQueueOffset:(long long)a0;
- (id)newSeekCommandEventWithType:(unsigned long long)a0;
- (void)notifyPropagatablePropertyChanged;

@end
