@class NSDictionary, NSString;

@interface CARemoteEffect : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *animations;
@property (readonly, nonatomic) unsigned long long effectID;
@property (readonly, nonatomic) unsigned long long layerRenderID;
@property (readonly, copy) NSString *name;
@property (copy) NSString *baseState;
@property double blendFactor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)animationFromState:(id)a0 toState:(id)a1;
- (void)setAnimation:(id)a0 fromState:(id)a1 toState:(id)a2;
- (BOOL)_setCARenderRemoteEffect:(struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)a0 layer:(void *)a1;
- (void)_setLayerRenderId:(unsigned long long)a0;

@end
