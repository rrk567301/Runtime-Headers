@class NSDictionary, NSMutableDictionary, NSString;
@protocol CSFModelComputeBackend;

@interface SLUresMitigator : NSObject

@property (retain, nonatomic) id<CSFModelComputeBackend> uresModel;
@property (retain, nonatomic) NSDictionary *inputOpsMap;
@property (retain, nonatomic) NSDictionary *outputMap;
@property (retain, nonatomic) NSMutableDictionary *inputOriginThresholdMap;
@property (retain, nonatomic) NSString *version;

+ (id)getTranscriptionForSpeechPackage:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (void)_createInputOriginThresholdMap:(id)a0;
- (id)_processInputFeats:(id)a0;
- (id)initWithConfig:(id)a0 bnnsIrPath:(id)a1 error:(id *)a2;
- (void)processInputFeats:(id)a0 completion:(id /* block */)a1;
- (id)processInputFeatsSync:(id)a0;

@end
