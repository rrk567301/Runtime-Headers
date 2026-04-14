@interface AVKitMacHelperDependencyLoader : NSObject

+ (void)load;
+ (Class)getAVPlayerControllerClass;
+ (Class)getAVObservationControllerClass;
+ (Class)getAVValueTimingClass;
+ (Class)getAVPlayerControllerTimeResolverClass;
+ (Class)getAVPlaybackRateCollectionClass;
+ (void)_exposeBindingsForTimeResolver:(Class)a0;

@end
