@interface ASCPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
