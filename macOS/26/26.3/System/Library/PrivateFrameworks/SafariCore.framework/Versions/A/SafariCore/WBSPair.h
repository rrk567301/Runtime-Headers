@interface WBSPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)getFirst:(id *)a0 second:(id *)a1;

@end
