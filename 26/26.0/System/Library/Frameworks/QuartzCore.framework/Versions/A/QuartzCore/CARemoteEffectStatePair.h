@class NSString;

@interface CARemoteEffectStatePair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fromState;
@property (readonly, nonatomic) NSString *toState;

+ (id)pairWithFromState:(id)a0 toState:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
