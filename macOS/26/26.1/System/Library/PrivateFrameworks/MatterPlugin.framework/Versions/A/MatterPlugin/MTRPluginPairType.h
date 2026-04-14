@interface MTRPluginPairType : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;

@end
