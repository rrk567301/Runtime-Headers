@class NSString, NSArray, NSURL, NSColor;

@interface IMFullScreenEffect : NSObject

@property char triggeredByResponseKit;
@property (weak) id triggeredByObject;
@property (copy) NSString *identifier;
@property (readonly) Class effectViewClass;
@property (readonly) unsigned long long layerCount;
@property (readonly) char effectIsDark;
@property (readonly, getter=isForegroundEffect) char foregroundEffect;
@property (readonly) double duration;
@property (readonly) NSColor *backgroundColor;
@property (readonly) NSArray *messageFilters;
@property (readonly) NSURL *soundEffectFileURL;
@property (readonly) char shouldDrawOverNavigationBar;
@property (readonly) char soundEffectHasHapticTrack;
@property unsigned long long messageOrientation;
@property (weak) id delegate;

+ (id)_monochromeDimmingFilterWithType:(long long)a0;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;

- (void).cxx_destruct;
- (void)prepareSoundEffect;

@end
