@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSCrownPressSelfLoggerWatch : NSObject <CSSiriClientBehaviorMonitorDelegate, CSSiriAssertionMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long displayWakeHostTime;
@property (nonatomic) char listeningEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)CSSiriAssertionMonitor:(id)a0 didReceiveBacklightOnEnabled:(char)a1 atHostTime:(unsigned long long)a2;
- (void)_emitCrownPressedEventwithMHUUID:(id)a0 didUseAOM:(char)a1;
- (void)_handleDidStartStreamWithContext:(id)a0 withOption:(id)a1 successfully:(char)a2;
- (void)siriClientBehaviorMonitor:(id)a0 didStartStreamWithContext:(id)a1 successfully:(char)a2 option:(id)a3 withEventUUID:(id)a4;
- (void)siriClientBehaviorMonitor:(id)a0 didStopStream:(id)a1 withEventUUID:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStartStreamWithContext:(id)a1 option:(id)a2;
- (void)siriClientBehaviorMonitor:(id)a0 willStopStream:(id)a1 reason:(unsigned long long)a2;

@end
