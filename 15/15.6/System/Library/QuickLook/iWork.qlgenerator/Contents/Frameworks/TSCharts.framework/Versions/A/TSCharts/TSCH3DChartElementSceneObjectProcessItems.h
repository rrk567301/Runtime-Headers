@class TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline, TSCH3DChartElementSceneObject, TSCH3DChartElementProperties, NSMutableArray;

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject {
    TSCH3DChartElementSceneObject *_sceneObject;
    TSCH3DSceneRenderPipeline *_pipeline;
    TSCH3DChartElementProperties *_properties;
    NSMutableArray *_delayedItems;
}

@property (readonly, nonatomic) char pushStates;
@property (readonly, nonatomic) char useBoundsGeometry;
@property (readonly, nonatomic) char geometryOnly;
@property (readonly, nonatomic) TSCH3DRenderProcessor *processor;

+ (id)processItemsWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;

- (void).cxx_destruct;
- (void)processItems;
- (id)elementInfoWithSeries:(id)a0 position:(void *)a1;
- (void)processDelayedItemsWithOpacity:(float)a0;
- (id)initWithSceneObject:(id)a0 properties:(id)a1 pipeline:(id)a2;
- (char)p_delayedItemsAreUnique;
- (void)p_processElementInfoWithSeries:(id)a0 position:(void *)a1;
- (void)performItemsProcessing;

@end
