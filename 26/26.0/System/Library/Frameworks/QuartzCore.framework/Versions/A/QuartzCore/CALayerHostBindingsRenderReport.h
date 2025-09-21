@class NSDictionary;

@interface CALayerHostBindingsRenderReport : NSObject

@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) struct CGSRegionObject { } *unobscuredShape;
@property (readonly, nonatomic) struct CGSRegionObject { } *unobscuredShapeClipped;
@property (readonly, nonatomic) struct CGSRegionObject { } *originalShape;
@property (readonly, nonatomic) unsigned int bindingFlags;
@property (readonly, nonatomic) NSDictionary *securityAnalysisInfo;
@property (readonly, nonatomic) unsigned int portalInstances;

- (void)dealloc;
- (id)initWithContextId:(unsigned int)a0 unobscuredShape:(struct CGSRegionObject { } *)a1 unobscuredShapeClipped:(struct CGSRegionObject { } *)a2 originalShape:(struct CGSRegionObject { } *)a3 bindingFlags:(unsigned int)a4 securityAnalysisInfo:(id)a5 portalInstances:(unsigned int)a6;

@end
