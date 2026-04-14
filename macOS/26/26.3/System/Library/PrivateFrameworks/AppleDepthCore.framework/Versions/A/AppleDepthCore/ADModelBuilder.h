@class NSString, NSDictionary;

@interface ADModelBuilder : NSObject {
    NSString *_srcModelPath;
    NSString *_destinationPath;
    NSString *_buildConfigPath;
    BOOL _forANE;
    NSDictionary *_buildConfig;
    NSString *_compiledModelUID;
}

@property (readonly, nonatomic) BOOL supportsCompilation;
@property (readonly, nonatomic) BOOL requiresCompilation;
@property (readonly, retain, nonatomic) NSString *runnableModelPath;

+ (id)modelBuilderForModelPath:(id)a0 destinationPath:(id)a1 buildConfigPath:(id)a2 forANE:(BOOL)a3;

- (void).cxx_destruct;
- (BOOL)makeRunnable;
- (BOOL)createE5MLBundle;
- (id)initWithSourcePath:(id)a0 destinationPath:(id)a1 buildConfigPath:(id)a2 forANE:(BOOL)a3;

@end
