@class NSObject;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long anchorSampleCount;
@property (nonatomic) unsigned long long anchorHostTime;

- (id)init;
- (void).cxx_destruct;
- (void)processSampleCount:(unsigned long long)a0 hostTime:(unsigned long long)a1;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)a0;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)a0;

@end
