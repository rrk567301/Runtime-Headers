@class NSString, NSArray;

@interface PS190UpdaterController : SoCUpdaterHelper <PS190UpdaterInstanceDelegate> {
    NSArray *_updaterInstances;
    BOOL _skipSameVersion;
    unsigned long long _updaterIndex;
}

@property (readonly) BOOL isDone;
@property (readonly) BOOL recoveryModeSupported;
@property (readonly) BOOL allowNonceQueries;
@property (copy) NSString *globallySignedManifestPath;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (id)queryInfoSingleStep;
- (id)queryInfoAggregate;
- (id)queryInfo;
- (BOOL)performUpdateWithDictionary:(id)a0;
- (void)initAllowNonceQueries:(id)a0;
- (BOOL)initializeUpdaterInstances;
- (id)queryInfoForUpdaterInstance:(id)a0;
- (BOOL)performUpdateForInstance:(id)a0 inputDict:(id)a1 firmwareFile:(id)a2;
- (BOOL)performUpdateWithDictionarySingleStep:(id)a0 firmwareFile:(id)a1;
- (BOOL)performUpdateWithDictionaryAggregate:(id)a0 firmwareFile:(id)a1;

@end
