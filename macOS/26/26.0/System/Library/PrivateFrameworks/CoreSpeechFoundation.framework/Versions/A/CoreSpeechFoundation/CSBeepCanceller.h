@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, CSBeepCancellerDelegate;

@interface CSBeepCanceller : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<BatchBeepCanceller, std::default_delete<BatchBeepCanceller>> { struct BatchBeepCanceller *__ptr_; } _beepCanceller;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _beepFloatVec;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _floatBuffer;
    struct vector<short, std::allocator<short>> { short *__begin_; short *__end_; short *__cap_; } _shortBuffer;
    unsigned long long _numTotalInputSamples;
    unsigned long long _numTotalOutputSamples;
}

@property (weak, nonatomic) id<CSBeepCancellerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *metrics;

- (void)reset;
- (id)init;
- (void)flush;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelBeepFromSamples:(id)a0 timestamp:(unsigned long long)a1;
- (void)willBeep;

@end
