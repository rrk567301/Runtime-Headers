@class NSString, MLModelConfiguration, MLModelMetadata, MLModelDescription;
@protocol MLUpdatable;

@interface MLDelegateUpdatableModel : MLDelegateModel <MLUpdatable>

@property (readonly, nonatomic) id<MLUpdatable> updatableEngine;
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

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver { } *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (char)writeToURL:(id)a0 error:(id *)a1;
- (void)cancelUpdate;
- (id)initWithEngine:(id)a0 error:(id *)a1;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)a0;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (void)updateModelWithData:(id)a0;

@end
