@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject

@property (retain, nonatomic) GKEventEmitter *emitter;
@property (readonly) double greatestScreenScale;

+ (id)sharedController;
+ (double)_scaleForCurrentDisplayConfiguration;

- (void)unregisterListener:(id)a0;
- (void)registerListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_screensDidChange:(id)a0;

@end
