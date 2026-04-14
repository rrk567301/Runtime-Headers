@class AVSpeechSynthesizer, NSObject;
@protocol OS_dispatch_queue;

@interface ULSpatialSceneClassification : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) AVSpeechSynthesizer *synthesizer;

+ (BOOL)isAvailable;
+ (id)spatialSceneClassification;

- (id)_init;
- (void).cxx_destruct;
- (void)runWithPhoto:(id)a0 handler:(id /* block */)a1;
- (id)spatialSceneClassificationFutureWithPhoto:(id)a0;

@end
