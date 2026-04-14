@class NSDictionary, NSString;

@interface SLUresMitigatorConfigDecoder : NSObject {
    NSDictionary *_configDict;
    NSString *_resourcePath;
}

- (void).cxx_destruct;
- (id)getVersion;
- (id)getModelFile;
- (id)initWithConfigFile:(id)a0 errOut:(id *)a1;
- (id)getBnnsIrWeightFile;
- (id)getInputOpsMap;
- (id)getOutputMap;
- (id)getSupportedInputOrigins;

@end
