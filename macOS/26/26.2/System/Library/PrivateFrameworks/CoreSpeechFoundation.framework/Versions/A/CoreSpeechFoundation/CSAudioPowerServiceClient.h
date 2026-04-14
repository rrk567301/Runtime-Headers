@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioPowerServiceClientDelegate;

@interface CSAudioPowerServiceClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    id<CSAudioPowerServiceClientDelegate> _delegate;
    long long _frequency;
    NSXPCConnection *_xpcConnection;
}

+ (unsigned long long)_getTimeIntervalFromFrequency:(long long)a0;

- (void)_timerFired;
- (void)invalidate;
- (id)_connection;
- (void)beginUpdate;
- (void)_beginUpdate;
- (void).cxx_destruct;
- (void)_endUpdate;
- (id)_service;
- (void)_invalidate;
- (void)endUpdate;
- (id)_newConnection;
- (void)_fetchPowerLevels;
- (id)initWithQueue:(id)a0 frequency:(long long)a1 delegate:(id)a2;

@end
