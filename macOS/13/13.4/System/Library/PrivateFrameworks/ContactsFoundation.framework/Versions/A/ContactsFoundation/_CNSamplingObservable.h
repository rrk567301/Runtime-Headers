@protocol CNCancelable, CNObservable;

@interface _CNSamplingObservable : CNObservable

@property (readonly, nonatomic) id<CNObservable> observable;
@property (readonly, nonatomic) id<CNObservable> sampler;
@property (retain) id sample;
@property (retain) id<CNCancelable> timer;

- (void).cxx_destruct;
- (id)initWithObservable:(id)a0 sampler:(id)a1;
- (void)receiveResult:(id)a0;
- (void)sendSampleToObserver:(id)a0;
- (id)subscribe:(id)a0;

@end
