@interface AVKitMacHelperDependencyLoader : NSObject

+ (void)load;
+ (Class)getAVObservationControllerClass;
+ (Class)getAVValueTimingClass;
+ (void)_exposeBindingsForTimeResolver:(Class)a0;
+ (Class)getAVPlayerControllerClass;
+ (Class)getAVPlayerControllerTimeResolverClass;
+ (Class)getAVPlaybackRateCollectionClass;

@end
