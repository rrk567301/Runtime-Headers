@class CSAttSiriMitigationAssetHandler;

@interface CSAttSiriMitigationAssetProvider : NSObject

@property (retain, nonatomic) CSAttSiriMitigationAssetHandler *assetHandler;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (id)init;
- (void)getUESConfigFileWithCompletion:(id /* block */)a0;
- (void)getAllowPhrasesListOverrideFileWithCompletion:(id /* block */)a0;
- (void)getNeuralCombinerConfigFileAndBnnsIrPathWithCompletion:(id /* block */)a0;
- (void)getNeuralCombinerConfigFileWithCompletion:(id /* block */)a0;
- (id)initWithAssetHanlder:(id)a0;
- (void)shouldRunCAROverrideWithCompletion:(id /* block */)a0;

@end
