@class BCULayerRenderer, CALayer, NSString;
@protocol BCUPurgeableImage;

@interface _BCULayerRendererOperation : NSObject <BCUOperation> {
    _Atomic long long _operationId;
    char _cancelled;
    char _configuring;
}

@property (retain, nonatomic) BCULayerRenderer *renderer;
@property (copy, nonatomic) id /* block */ layerBlock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<BCUPurgeableImage> result;
@property (readonly, nonatomic) char waitForCPUSynchronization;
@property (nonatomic) float priority;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (long long)_compareHoldingStateLock:(id)a0;
- (void)completeWithImage:(id)a0;
- (id)configureLayer;
- (id)initWithRenderer:(id)a0 priority:(float)a1 waitForCPUSynchronization:(char)a2 logKey:(id)a3 layerBlock:(id /* block */)a4 completion:(id /* block */)a5;

@end
