@interface ASCPair : NSObject <NSCopying>

@property (readonly, nonatomic) id first;
@property (readonly, nonatomic) id second;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithFirst:(id)a0 second:(id)a1;

@end
