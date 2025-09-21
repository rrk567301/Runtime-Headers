@class NSString, CNObservable;
@protocol CNCancelable;

@interface _CNObservableTakeUntilOperator : CNObservable <_CNObservableTakeUntilInputObserverDelegate, _CNObservableTakeUntilSignalObserverDelegate>

@property (readonly) CNObservable *input;
@property (readonly) CNObservable *signal;
@property (getter=isActive) char active;
@property (retain) id<CNCancelable> inputToken;
@property (retain) id<CNCancelable> signalToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (id)subscribe:(id)a0;
- (id)initWithInput:(id)a0 signal:(id)a1;
- (char)shouldMirrorEvent:(id)a0;
- (void)signalDidGenerateEventWithObserver:(id)a0;

@end
