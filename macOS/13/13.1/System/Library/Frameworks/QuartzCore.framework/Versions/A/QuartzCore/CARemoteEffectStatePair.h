@class NSString;

@interface CARemoteEffectStatePair : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fromState;
@property (readonly, nonatomic) NSString *toState;

+ (id)pairWithFromState:(id)a0 toState:(id)a1;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
