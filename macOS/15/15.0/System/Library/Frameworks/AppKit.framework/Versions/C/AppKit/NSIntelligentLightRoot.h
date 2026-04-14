@class NSWindow, SUICIntelligentLightLayer;
@protocol CARenderValue;

@interface NSIntelligentLightRoot : NSObject {
    NSWindow *_window;
    SUICIntelligentLightLayer *_lightLayer;
    unsigned long long _usesAudioLevels;
    double _audioLevel;
}

@property double audioLevel;
@property (readonly, weak) NSWindow *window;
@property (readonly) id<CARenderValue> contents;

+ (void)initialize;
+ (id)rootForWindow:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithWindow:(id)a0;
- (void)decrementUsesAudioLevels;
- (void)incrementUsesAudioLevels;

@end
