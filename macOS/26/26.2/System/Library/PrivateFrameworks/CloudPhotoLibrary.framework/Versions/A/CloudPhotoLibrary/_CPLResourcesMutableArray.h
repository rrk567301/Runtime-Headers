@class NSMutableDictionary;

@interface _CPLResourcesMutableArray : NSObject {
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}

- (void).cxx_destruct;
- (void)addResource:(id)a0;
- (id)initWithResources:(id)a0;
- (id)allResources;
- (id)reallyUpdatedResources;

@end
