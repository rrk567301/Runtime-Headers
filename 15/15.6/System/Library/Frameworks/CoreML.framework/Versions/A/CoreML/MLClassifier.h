@class NSString, MLModelConfiguration, MLModelMetadata, MLModelDescription, NSObject;
@protocol OS_dispatch_queue;

@interface MLClassifier : MLModel <MLClassifier> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncClassifierQueueLock;
    char _supportsAsyncClassification;
    NSObject<OS_dispatch_queue> *_asyncClassifierQueue;
}

@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) char supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) char recordsPredictionEvent;
@property (readonly, nonatomic) unsigned long long signpostID;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)predictionFromFeatures:(id)a0 classifier:(id)a1 options:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (char)_needsToEmulateAsyncClassificationUsingQueue:(id *)a0;
- (id)classLabels;
- (id)classifierResultFromOutputFeatures:(id)a0 error:(id *)a1;
- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0 configuration:(id)a1 error:(id *)a2;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
