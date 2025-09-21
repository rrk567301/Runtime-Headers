@class NSString, NSArray;

@interface PS190UpdaterController : SoCUpdaterHelper <PS190UpdaterInstanceDelegate> {
    NSArray *_updaterInstances;
    char _skipSameVersion;
    unsigned long long _updaterIndex;
}

@property (readonly) char isDone;
@property (readonly) char recoveryModeSupported;
@property (readonly) char allowNonceQueries;
@property (copy) NSString *globallySignedManifestPath;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (id)queryInfo;
- (char)performUpdateWithDictionary:(id)a0;
- (id)queryInfoAggregate;
- (id)queryInfoSingleStep;
- (void)initAllowNonceQueries:(id)a0;
- (char)initializeUpdaterInstances;
- (char)performUpdateForInstance:(id)a0 inputDict:(id)a1 firmwareFile:(id)a2;
- (char)performUpdateWithDictionaryAggregate:(id)a0 firmwareFile:(id)a1;
- (char)performUpdateWithDictionarySingleStep:(id)a0 firmwareFile:(id)a1;
- (id)queryInfoForUpdaterInstance:(id)a0;

@end
