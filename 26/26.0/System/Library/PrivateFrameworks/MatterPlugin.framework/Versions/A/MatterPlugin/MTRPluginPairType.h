@interface MTRPluginPairType : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
