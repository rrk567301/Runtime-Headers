@class NSString;

@interface ASCredentialServiceIdentifier : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
