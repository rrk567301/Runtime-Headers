@interface WBSPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)getFirst:(id *)a0 second:(id *)a1;

@end
