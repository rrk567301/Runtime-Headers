@class NSDictionary, NSString;

@interface CARemoteExternalEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *propertiesByState;
@property (copy) NSString *effectName;

+ (BOOL)supportsSecureCoding;
+ (id)effectWithName:(id)a0;

- (id)name;
- (BOOL)_setCARenderRemoteEffect:(struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)a0 layer:(void *)a1;
- (struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (void)setProperties:(id)a0 forState:(id)a1;
- (id)propertiesForState:(id)a0;

@end
