@interface SiriUIConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isSystemHostedPresentation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initAsSystemHostedPresentation:(BOOL)a0;

@end
