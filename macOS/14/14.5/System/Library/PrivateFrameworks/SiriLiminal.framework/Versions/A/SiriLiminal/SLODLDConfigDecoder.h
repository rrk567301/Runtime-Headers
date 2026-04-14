@class NSString, NSDictionary;

@interface SLODLDConfigDecoder : NSObject

@property (retain, nonatomic) NSString *resourcePath;
@property (retain, nonatomic) NSDictionary *dictionary;

- (void).cxx_destruct;
- (id)getBertModelFile;
- (id)initWithConfigFile:(id)a0;
- (id)getSPMModelFile;
- (id)_getValueForKey:(id)a0 categoryKey:(id)a1;
- (id)getBertModelOutputNodes;
- (id)getConfigVersion;
- (unsigned long long)getInputType;
- (id)getOdldModelBnnsIrWeightFile;
- (id)getOutputSpecs;
- (unsigned long long)getPreProcessorType;
- (id)getRegexMapConfig;
- (id)getSPMEncoderOptions;
- (unsigned long long)getTokenizerType;
- (BOOL)isSPMModelMmapable;

@end
