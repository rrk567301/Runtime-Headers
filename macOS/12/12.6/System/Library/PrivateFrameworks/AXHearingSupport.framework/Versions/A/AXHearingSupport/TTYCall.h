@class NSString, NSDictionary, AVCVirtualTTYDevice, TTYConversation, TUCall, NSObject;
@protocol OS_dispatch_queue, TTYCallDelegate;

@interface TTYCall : NSObject <AVCVirtualTTYDeviceDelegate> {
    NSObject<OS_dispatch_queue> *_callQueue;
}

@property (retain, nonatomic) AVCVirtualTTYDevice *ttyDevice;
@property (retain, nonatomic) TTYConversation *conversation;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSDictionary *substitutions;
@property (nonatomic) id<TTYCallDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithCall:(id)a0;
- (void)sendCharacter:(unsigned short)a0;
- (void)device:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)deviceDidStop:(id)a0;
- (void)device:(id)a0 didReceiveCharacter:(unsigned short)a1;
- (void)registerNotifications;
- (void)recreateTTYDevice:(id)a0;
- (void)mediaServerDied;

@end
