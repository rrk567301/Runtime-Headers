@class NSArray, LNStaticDeferredLocalizedString;

@interface LNConfirmationActionName : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char destructive;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *acceptLabel;
@property (readonly, copy, nonatomic) NSArray *acceptAlternatives;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *denyLabel;
@property (readonly, copy, nonatomic) NSArray *denyAlternatives;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 destructive:(char)a1 acceptLabel:(id)a2 acceptAlternatives:(id)a3 denyLabel:(id)a4 denyAlternatives:(id)a5;
- (id)initWithType:(long long)a0 destructive:(char)a1;

@end
