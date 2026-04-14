@class NSMutableDictionary, _LSSCAParamsDictionary, LSSSettings, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, LSSSubscriptionProvider;

@interface LSSCAService : NSObject {
    NSMutableArray *_displaysToUpdate;
    NSMutableDictionary *_globalLightRequests;
    _LSSCAParamsDictionary *_params;
    _LSSCAParamsDictionary *_extendedParams;
    double _alignmentRange;
    id /* block */ _needsGlobalLightCallback;
    LSSSettings *_settings;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<LSSSubscriptionProvider> subscriber;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0 subscriber:(id)a1;
- (id)displayForDisplayLink;
- (void)setLightForDynamicDisplays:(struct { double x0; double x1; struct { } x2; BOOL x3; })a0;
- (void)setLightForExtendedDisplays:(struct { double x0; double x1; struct { } x2; BOOL x3; })a0;

@end
