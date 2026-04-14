@class NSString, NSObject;
@protocol OS_dispatch_queue, SiriAnalyticsService;

@interface SiriAnalyticsClientMessageStream : NSObject <SiriAnalyticsMessageStream> {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsService> _service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1;
- (void)resolvePartialMessage:(id)a0 isolatedStreamUUID:(id)a1;
- (void)resolvePartialMessage:(id)a0;
- (void)setAnalyticsService:(id)a0;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)emitMessage:(id)a0 isolatedStreamUUID:(id)a1;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 assetIdentifier:(id)a1 requestIdentifier:(id)a2 messageMetadata:(id)a3 completion:(id /* block */)a4;
- (id)analyticsService;
- (id)initWithQueue:(id)a0 analyticsService:(id)a1;
- (void)emitMessage:(id)a0;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2;
- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2;
- (void).cxx_destruct;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 assetIdentifier:(id)a1 messageMetadata:(id)a2 completion:(id /* block */)a3;

@end
