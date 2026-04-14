@class NSDictionary, SRResources, NSObject;
@protocol OS_dispatch_queue;

@interface SKDSpotlightResourcesProvider : NSObject <SKDSpotlightResourcesProviding> {
    SRResources *_resources;
    NSDictionary *_supportedFlags;
    NSDictionary *_locked_strings;
    NSDictionary *_locked_paths;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)update;
- (void).cxx_destruct;
- (id)init;
- (id)pathForContentType:(id)a0;
- (void)updateResources;
- (id)stringArrayForName:(id)a0 contentType:(id)a1;
- (id)_listValueWithKey:(id)a0 resources:(id)a1;
- (id)flagForName:(id)a0 contentType:(id)a1;
- (id)versionForGeoIndex;

@end
