@class AVVCDuckOverride, AVVCDuckFadeDuration;

@interface AVVCDuckSettings : NSObject

@property (retain, nonatomic) AVVCDuckOverride *duckOverride;
@property (retain, nonatomic) AVVCDuckFadeDuration *fadeDuration;

- (void)dealloc;
- (id)description;
- (id)init;

@end
