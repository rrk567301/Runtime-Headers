@class SVXDeactivationOptions, NSDictionary, SVXClientInfo, SVXButtonEvent;

@interface SVXDeactivationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) SVXButtonEvent *buttonEvent;
@property (readonly, copy, nonatomic) SVXClientInfo *clientInfo;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) SVXDeactivationOptions *options;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithSource:(long long)a0 timestamp:(unsigned long long)a1 buttonEvent:(id)a2 clientInfo:(id)a3 userInfo:(id)a4 options:(id)a5;

@end
