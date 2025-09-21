@class NSString;

@interface AFMyriadGoodnessScoreOverrideState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long overrideOption;
@property (readonly, copy, nonatomic) NSString *reason;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithOverrideOption:(long long)a0 reason:(id)a1;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
