@interface MTRPluginPairType : NSObject <NSCopying>

@property (retain) id first;
@property (retain) id second;

- (id)initWithFirst:(id)a0 second:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
