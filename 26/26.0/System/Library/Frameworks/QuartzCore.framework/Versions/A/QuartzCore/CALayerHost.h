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

+ (id)allLayerHosts;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)setNeedsAuthoritativeHostingToken;
- (void)dealloc;
- (BOOL)shouldArchiveValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (id)init;
- (void)didChangeValueForKey:(id)a0;

@end
