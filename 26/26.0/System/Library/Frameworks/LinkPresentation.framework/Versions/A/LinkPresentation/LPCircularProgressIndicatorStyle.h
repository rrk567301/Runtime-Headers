@class NSColor;

@interface LPCircularProgressIndicatorStyle : NSObject <NSCopying>

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSColor *borderColor;
@property (retain, nonatomic) NSColor *fillColor;

- (id)initWithPlatform:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
