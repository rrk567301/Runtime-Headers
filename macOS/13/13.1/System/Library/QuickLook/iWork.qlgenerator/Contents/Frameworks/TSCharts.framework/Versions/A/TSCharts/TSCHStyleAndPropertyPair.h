@class TSSStyle;

@interface TSCHStyleAndPropertyPair : NSObject <NSCopying>

@property (readonly, nonatomic) TSSStyle *style;
@property (readonly, nonatomic) int property;

+ (id)pairWithStyle:(id)a0 property:(int)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(id)a0 property:(int)a1;

@end
