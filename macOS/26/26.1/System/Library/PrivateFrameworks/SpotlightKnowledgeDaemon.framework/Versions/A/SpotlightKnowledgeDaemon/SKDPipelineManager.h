@class NSDictionary, SKDRecordProcessorCache;
@protocol SKDEventLogger;

@interface SKDPipelineManager : NSObject {
    NSDictionary *_pipelines;
    SKDRecordProcessorCache *_processorCache;
    id<SKDEventLogger> _logger;
}

+ (id)sharedManager;

- (id)pipelines;
- (void).cxx_destruct;
- (id)cleanupJob;
- (id)indexProcessingJobWithProtectionClasses:(id)a0;
- (id)initWithDescriptors:(id)a0 processorCache:(id)a1 logger:(id)a2;
- (id)journalProcessingJobs;
- (id)pipelineForName:(id)a0;
- (id)reindexJob;
- (id)reportingJob;
- (id)resetJob;

@end
