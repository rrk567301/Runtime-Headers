@class NSArray, NSString, CAHostingToken;

@interface CALayerHost : CALayer {
    BOOL _tokenNeedsPort;
}

@property unsigned int contextId;
@property (retain, nonatomic) CAHostingToken *hostingToken;
@property BOOL inheritsSecurity;
@property BOOL rendersAsynchronously;
@property BOOL asynchronousOpaque;
@property (copy) NSArray *asynchronousRenderTimes;
@property double asynchronousRenderPeriod;
@property float asynchronousRenderMaxAPL;
@property float asynchronousRenderMaxAPLStrength;
@property BOOL resizesHostedContext;
@property BOOL preservesFlip;
@property BOOL stopsHitTestTransformAccumulation;
@property BOOL stopsSecureSuperlayersValidation;
@property BOOL transformsToScreenSpace;
@property BOOL sequestered;
@property (copy) NSString *zombificationMode;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)allLayerHosts;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)didChangeValueForKey:(id)a0;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)setNeedsAuthoritativeHostingToken;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (id)init;
- (void)dealloc;

@end
