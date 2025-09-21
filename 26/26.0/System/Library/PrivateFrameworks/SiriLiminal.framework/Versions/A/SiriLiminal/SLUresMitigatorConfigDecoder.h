@class NSDictionary, NSString;

@interface SLUresMitigatorConfigDecoder : NSObject {
    NSDictionary *_configDict;
    NSString *_resourcePath;
}

- (id)getVersion;
- (void).cxx_destruct;
- (id)getBnnsIrWeightFile;
- (id)getInputOpsMap;
- (id)getModelFile;
- (id)getOutputMap;
- (id)getSupportedInputOrigins;
- (id)initWithConfigFile:(id)a0 errOut:(id *)a1;

@end
