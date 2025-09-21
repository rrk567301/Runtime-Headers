@interface VUIAutoPlayConfig : NSObject

@property (nonatomic) double autoPlayDelayInterval;
@property (nonatomic) char autoPlayVideoSound;
@property (readonly, nonatomic) char disableBackgroundMediaPlayback;

- (id)init;

@end
