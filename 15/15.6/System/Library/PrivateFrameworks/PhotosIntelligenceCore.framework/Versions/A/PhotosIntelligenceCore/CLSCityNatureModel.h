@class NSString, CLSSignalNode;

@interface CLSCityNatureModel : NSObject <CLSClassificationBasedSignalModel>

@property (class, readonly) NSString *name;
@property (class, readonly) unsigned long long latestVersion;

@property (readonly) CLSSignalNode *natureNode;
@property (readonly) CLSSignalNode *cityNode;
@property (readonly) CLSSignalNode *cityNatureishNode;
@property (readonly) double cityscapeWallpaperSuggestionCityThreshold;
@property (readonly) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)a0;
+ (void)enumerateModelsAscending:(char)a0 usingBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initForTesting;
- (id)modelInfo;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0;
- (char)isResponsibleForSignalIdentifier:(unsigned long long)a0;
- (id)nodeForSignalIdentifier:(unsigned long long)a0;
- (void)processSignals:(id)a0 intoProcessedSignals:(id)a1;
- (void)setupVersion82;
- (void)setupVersion85;

@end
