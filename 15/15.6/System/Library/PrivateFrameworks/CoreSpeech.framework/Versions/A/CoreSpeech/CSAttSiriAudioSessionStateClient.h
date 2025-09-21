@class NSString, AFNotifyObserver, NSObject;
@protocol OS_dispatch_queue, CSAttSiriSessionStateDelegate;

@interface CSAttSiriAudioSessionStateClient : NSObject <AFNotifyObserverDelegate>

@property (retain, nonatomic) AFNotifyObserver *siriStateObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateNotificationQueue;
@property (nonatomic) char isSpeaking;
@property (nonatomic) char isListening;
@property (nonatomic) char isActiveRequest;
@property (nonatomic) char isActiveSession;
@property (readonly, weak, nonatomic) id<CSAttSiriSessionStateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dispatchStateChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;

@end
