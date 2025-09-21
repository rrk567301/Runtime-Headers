@interface WBSPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (void)getFirst:(id *)a0 second:(id *)a1;

@end
