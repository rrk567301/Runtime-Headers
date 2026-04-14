@class NSString, AVInputDevice, AVRoutingWeakReference, NSDictionary, NSObject, AVInputContext;
@protocol OS_dispatch_queue;

@interface AVFigRoutingContextInputContextImpl : NSObject <AVInputContextImpl> {
    id /* block */ _routingContextCreator;
    AVRoutingWeakReference *_weakObserver;
    BOOL _usesRouteConfigUpdatedNotification;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSDictionary *_destinationChangesForRouteChangeIDs;
}

@property (readonly, nonatomic) struct OpaqueFigRoutingContext { } *figRoutingContext;
@property (weak) AVInputContext *parentInputContext;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *inputContextType;
@property (readonly, nonatomic) AVInputDevice *inputDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)routingContextFactory;
+ (id)inputContextImplForID:(id)a0 type:(id)a1;
+ (id)sharedSystemAudioInputContext;

- (void)_serverConnectionDied;
- (void)_routeChangeStartedWithID:(id)a0;
- (void)dealloc;
- (void)_routeConfigUpdateStartedWithID:(struct __CFString { } *)a0;
- (void)_routeConfigUpdateEndedWithID:(struct __CFString { } *)a0 reason:(struct __CFString { } *)a1;
- (void)_routeConfigUpdatedWithID:(struct __CFString { } *)a0 reason:(struct __CFString { } *)a1 initiator:(struct __CFString { } *)a2 endedError:(struct __CFString { } *)a3 deviceID:(struct __CFString { } *)a4 previousDeviceIDs:(struct __CFArray { } *)a5;
- (id)initWithFigRoutingContextCreator:(id /* block */)a0;
- (void)_currentRouteChanged;
- (id)initWithRoutingContextUUID:(id)a0 type:(id)a1;
- (id)init;
- (id)routingContextUUID;
- (void)_routeChangeEndedWithID:(id)a0 reason:(struct __CFString { } *)a1;
- (id)initWithFigRoutingContext:(struct OpaqueFigRoutingContext { } *)a0 routingContextReplacementBlock:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct __CFDictionary { } *)_createSelectRouteOptionsForSetInputDeviceOptions:(id)a0;
- (id)_createUserPreferredRouteModificationDictionary:(id)a0;
- (BOOL)clearUserPreferredInputDevice:(id)a0 error:(id *)a1;
- (void)inputContextDidChangeApplicationProcessID:(id)a0;
- (void)setInputDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)userPreferredInputDevice:(id)a0;

@end
