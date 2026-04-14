@class NSDictionary, SRResources, NSObject;
@protocol OS_dispatch_queue;

@interface SKDDefaultsProvider : NSObject <SKDDefaultsProviding> {
    SRResources *_resources;
    NSDictionary *_supportedFlags;
    NSDictionary *_locked_strings;
    NSDictionary *_locked_paths;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL enableAppleIntelligence;
@property (readonly, nonatomic) BOOL enableEmbeddings;
@property (readonly, nonatomic) BOOL enablePIR;

- (void).cxx_destruct;
- (void)update;
- (id)init;
- (id)pathForContentType:(id)a0;
- (void)updateResources;
- (id)stringArrayForName:(id)a0 contentType:(id)a1;
- (BOOL)_booleanValueWithKey:(id)a0 resources:(id)a1;
- (id)_listValueWithKey:(id)a0 resources:(id)a1;
- (id)flagForName:(id)a0 contentType:(id)a1;
- (id)versionForGeoIndex;
- (id)versionForPipeline:(id)a0;

@end
