@class PKInk;

@interface PKTool : NSObject <NSCopying>

@property (readonly, nonatomic) PKInk *ink;

+ (BOOL)_inkIsInkingTool:(id)a0;
+ (id)_toolWithInk:(id)a0;
+ (id)_toolWithInk:(id)a0 configuration:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithInk:(id)a0;

@end
