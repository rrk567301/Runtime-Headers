@class NSDictionary, NSString;

@interface CARemotePropertyEffect : CARemoteEffect

@property (retain, nonatomic) NSDictionary *valuesByState;
@property (copy) NSString *keyPath;

+ (BOOL)supportsSecureCoding;
+ (id)effectWithKeyPath:(id)a0;

- (id)name;
- (id)initWithKeyPath:(id)a0;
- (BOOL)_setCARenderRemoteEffect:(struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)a0 layer:(void *)a1;
- (void)setValue:(id)a0 forState:(id)a1;
- (id)valueForState:(id)a0;
- (struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)_copyRenderRemoteEffectForLayer:(void *)a0;

@end
