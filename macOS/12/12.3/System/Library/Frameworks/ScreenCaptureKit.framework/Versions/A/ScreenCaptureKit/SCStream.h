@class SCContentFilter, NSString, NSObject, SCStreamConfiguration;
@protocol SCStreamOutput, OS_dispatch_queue, SCStreamDelegate;

@interface SCStream : NSObject {
    SCContentFilter *_streamFilter;
    double _totalLatency;
    double _frameCount;
}

@property (retain, nonatomic) id<SCStreamDelegate> delegate;
@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) SCStreamConfiguration *streamConfig;
@property (retain, nonatomic) id<SCStreamOutput> screenStreamOutput;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenSampleHandlerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *streamQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (id)serializeStreamContentFilter:(id)a0;
- (id)collectStreamData;
- (id)serializeStreamProperties;
- (id)serializeSCWindows:(id)a0;
- (id)serializeSCRunningApplications:(id)a0;
- (double)getAverageTimeLatency;
- (id)initWithFilter:(id)a0 configuration:(id)a1 delegate:(id)a2;
- (void)updateContentFilter:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)addStreamOutput:(id)a0 type:(long long)a1 sampleHandlerQueue:(id)a2 error:(id *)a3;
- (BOOL)removeStreamOutput:(id)a0 type:(long long)a1 error:(id *)a2;
- (void)startCaptureWithCompletionHandler:(id /* block */)a0;
- (void)stopCaptureWithCompletionHandler:(id /* block */)a0;

@end
