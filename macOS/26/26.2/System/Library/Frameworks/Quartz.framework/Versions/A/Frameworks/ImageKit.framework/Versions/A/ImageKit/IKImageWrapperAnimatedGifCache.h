@class NSMutableDictionary;

@interface IKImageWrapperAnimatedGifCache : NSObject {
    NSMutableDictionary *_framesCache;
    int _frameCount;
}

- (int)frameCount;
- (void)setFrameCount:(int)a0;
- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)a0 atIndex:(int)a1;
- (void)setObject:(id)a0 forKey:(id)a1 atIndex:(int)a2;

@end
