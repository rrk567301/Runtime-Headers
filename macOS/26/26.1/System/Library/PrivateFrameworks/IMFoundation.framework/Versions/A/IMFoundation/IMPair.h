@interface IMPair : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;

@end
