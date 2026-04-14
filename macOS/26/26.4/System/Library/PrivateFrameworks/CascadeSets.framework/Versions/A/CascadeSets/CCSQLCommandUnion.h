@class NSArray;

@interface CCSQLCommandUnion : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *selects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithSelects:(id)a0;

@end
