@class NSMutableDictionary, LSSSettings, LSSCAParamsDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, LSSSubscriptionProvider;

@interface LSSCAService : NSObject {
    NSMutableArray *_displaysToUpdate;
    NSMutableDictionary *_globalLightRequests;
    LSSCAParamsDictionary *_params;
    LSSCAParamsDictionary *_extendedParams;
    double _alignmentRange;
    id /* block */ _needsGlobalLightCallback;
    LSSSettings *_settings;
    unsigned long long _requestedUpdateCount;
    unsigned long long _actualUpdateCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<LSSSubscriptionProvider> subscriber;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTargetQueue:(id)a0 subscriber:(id)a1;
- (id)displayForDisplayLink;
- (void)setLightForDynamicDisplays:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a0;
- (void)setLightForExtendedDisplays:(struct { double x0; struct { } x1; float x2; unsigned int x3; })a0;

@end
