@class NSString;

@interface CDPLocalSecret : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *validatedSecret;
@property (readonly, nonatomic) unsigned long long secretType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValidatedSecret:(id)a0 secretType:(unsigned long long)a1;

@end
