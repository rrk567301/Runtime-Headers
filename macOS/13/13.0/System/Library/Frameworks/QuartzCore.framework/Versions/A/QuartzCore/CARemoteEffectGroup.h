@class NSArray, NSString;

@interface CARemoteEffectGroup : CARemoteEffect

@property (copy) NSArray *effects;
@property (copy) NSString *groupName;
@property (getter=isMatched) BOOL matched;
@property (getter=isSource) BOOL source;

+ (BOOL)supportsSecureCoding;
+ (id)groupWithEffects:(id)a0;

- (id)name;
- (BOOL)_setCARenderRemoteEffect:(struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)a0 layer:(void *)a1;
- (struct RemoteEffect { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; unsigned long long x4; unsigned long long x5; struct __CFData *x6; double x7; } *)_copyRenderRemoteEffectForLayer:(void *)a0;
- (id)initWithEffects:(id)a0;

@end
