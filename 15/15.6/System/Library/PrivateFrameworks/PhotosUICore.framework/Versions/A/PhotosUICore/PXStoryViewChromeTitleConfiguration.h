@interface PXStoryViewChromeTitleConfiguration : NSObject <NSCopying>

@property (nonatomic) long long textAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) char hidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithTextAlignment:(long long)a0 margins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithTextAlignment:(long long)a0 margins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a1 hidden:(char)a2;

@end
