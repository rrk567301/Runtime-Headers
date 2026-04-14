@class NSNumber;

@interface AVVCDuckFadeDuration : NSObject

@property (retain, nonatomic) NSNumber *fadeIn;
@property (retain, nonatomic) NSNumber *fadeOut;

- (void)dealloc;
- (id)description;
- (id)initWithFadeIn:(id)a0 fadeOut:(id)a1;

@end
