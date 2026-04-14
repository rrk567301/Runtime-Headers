@class NSString;

@interface SFAutoFillOneTimeCodeEmbeddedDomainPair : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL strict;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
