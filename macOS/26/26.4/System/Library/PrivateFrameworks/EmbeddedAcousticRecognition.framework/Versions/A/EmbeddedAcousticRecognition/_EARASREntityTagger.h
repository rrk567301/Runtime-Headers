@class NSString;

@interface _EARASREntityTagger : NSObject <_EntityTaggingProtocol> {
    void /* unknown type, empty encoding */ earASRTaggerElectra;
    void /* unknown type, empty encoding */ earASRTaggerCreateML;
    void /* unknown type, empty encoding */ earASRTaggerFstLM;
    void /* unknown type, empty encoding */ version;
}

+ (BOOL)supported;
+ (void)configureWithConfigFile:(NSString *)a0 completion:(void (^)(_EARASREntityTagger *))a1;
+ (void)configureWithConfigFile:(NSString *)a0 userProfile:(NSString *)a1 completion:(void (^)(_EARASREntityTagger *))a2;

- (id)modelVersion;
- (void).cxx_destruct;
- (id)init;
- (id)tagEntitiesIn:(id)a0;
- (id)tagEntitiesInArray:(id)a0;
- (id)tagEntitiesWithTagNamesIn:(id)a0;

@end
