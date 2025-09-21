@class NSString, NSDictionary, NSTimer, CALayer;
@protocol MicaPlayerDelegate;

@interface MicaPlayer : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (retain, nonatomic) NSTimer *playTimer;
@property (weak, nonatomic) id<MicaPlayerDelegate> delegate;
@property (nonatomic) double retinaScale;
@property (nonatomic) double documentDuration;
@property (readonly, nonatomic) char isPlaying;
@property (nonatomic) double playbackTime;
@property (nonatomic) float preferredPlaybackSpeed;
@property (readonly, nonatomic) char isPlaybackAtEnd;
@property (nonatomic) char loopDuringPlayback;

+ (char)boolFromDictionary:(id)a0 key:(id)a1 defaultValue:(char)a2;
+ (id)rootDictForPath:(id)a0;
+ (id)updatePublishedObjects:(id)a0 toReferenceLayersInTree:(id)a1 ratherThanLayersInTree:(id)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)removeFromSuperlayer;
- (id)publishedLayerWithKey:(id)a0 required:(char)a1;
- (void)addToLayer:(id)a0 onTop:(char)a1 gravity:(id)a2;
- (id)initWithData:(id)a0 url:(id)a1 retinaScale:(double)a2;
- (id)initWithFileName:(id)a0 retinaScale:(double)a1;
- (id)initWithPath:(id)a0 retinaScale:(double)a1;
- (id)initWithPath:(id)a0 retinaScale:(double)a1 rootLayer:(id)a2 publishedObjects:(id)a3;
- (char)isTimerNeeded;
- (void)moveAndResizeWithinParentLayer:(id)a0 usingGravity:(id)a1 animate:(char)a2;
- (void)notifyDelegateDidChangePlaybackTime;
- (void)notifyDelegateDidChangePlaybackTimeIsPlaybackAtEnd:(char)a0;
- (void)notifyDelegateDidStartPlaying;
- (void)notifyDelegateDidStopPlaying;
- (id)publishedObjectWithKey:(id)a0 required:(char)a1;
- (void)runPlayTimer:(id)a0;
- (void)startPlayTimerIfNeeded;
- (void)stopPlayTimer;

@end
