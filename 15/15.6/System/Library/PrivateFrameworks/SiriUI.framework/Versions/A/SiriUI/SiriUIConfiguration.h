@interface SiriUIConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) char isSystemHostedPresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initAsSystemHostedPresentation:(char)a0;

@end
