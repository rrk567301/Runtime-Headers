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

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 inUpdateInterval:(double)a1 outUpdateInterval:(double)a2 delegate:(id)a3;
- (void)provider:(id)a0 updatedLight:(struct { double x0; double x1; struct { } x2; BOOL x3; })a1;
- (void)updateLightDirection:(struct { double x0; double x1; struct { } x2; BOOL x3; })a0;

@end
