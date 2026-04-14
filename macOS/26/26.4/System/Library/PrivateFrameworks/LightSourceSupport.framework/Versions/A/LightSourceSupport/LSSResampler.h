@class NSString, LSSSampleBuffer, NSObject;
@protocol OS_dispatch_source, LSSProviderDelegate, OS_dispatch_queue, LSSProvider;

@interface LSSResampler : NSObject <LSSProvider, LSSProviderDelegate> {
    id<LSSProvider> _provider;
    NSObject<OS_dispatch_source> *_timer;
    LSSSampleBuffer *_buffer;
    BOOL _paused;
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
- (id)initWithProvider:(id)a0 inUpdateInterval:(double)a1 outUpdateInterval:(double)a2 delegate:(id)a3;
- (void)provider:(id)a0 updatedLight:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a1;
- (void)updateLightDirection:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a0;

@end
