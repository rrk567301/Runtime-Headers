@class PKInk;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKInk *ink;

+ (BOOL)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
- (id)_initWithInk:(id)a0;
- (id)initWithType:(id)a0 color:(id)a1 weight:(double)a2;

@end
