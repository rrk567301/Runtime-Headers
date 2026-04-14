@class NSString, LSSEventQueue, NSObject, LSSDisplayLink;
@protocol OS_dispatch_queue, LSSProviderDelegate, LSSProvider;

@interface LSSDisplayLinkResampler : NSObject <LSSProvider, LSSProviderDelegate> {
    LSSDisplayLink *_displayLink;
    LSSEventQueue *_eventQueue;
    id<LSSProvider> _provider;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (readonly, nonatomic) double inUpdateInterval;
@property (readonly, nonatomic) double outUpdateInterval;
@property (nonatomic) double additionalShiftToAccountForVariance;
@property (nonatomic) long long features;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)_onthread_fire;
- (id)initWithProvider:(id)a0 display:(id)a1 inUpdateInterval:(double)a2 outUpdateInterval:(double)a3 delegate:(id)a4;
- (void)provider:(id)a0 updatedLight:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a1;
- (void)updateLightDirection:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a0;

@end
