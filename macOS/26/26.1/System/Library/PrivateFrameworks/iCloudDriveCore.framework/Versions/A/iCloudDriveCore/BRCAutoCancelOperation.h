@class NSString, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface BRCAutoCancelOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_group> *_observersGroup;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endObservingChanges;
- (id)createActivity;
- (void)beginObservingChanges;
- (BOOL)hasObservers;
- (void)main;
- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0;
- (void).cxx_destruct;
- (void)_initializeCancelTimer;
- (id)initWithName:(id)a0 syncContext:(id)a1 sessionContext:(id)a2 group:(id)a3;

@end
