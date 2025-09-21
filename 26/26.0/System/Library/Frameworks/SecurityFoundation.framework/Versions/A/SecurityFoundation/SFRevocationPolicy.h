@interface SFRevocationPolicy : NSObject <NSCopying, NSSecureCoding> {
    id _revocationPolicyInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long revocationMethods;
@property (nonatomic) long long networkLookup;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRevocationMethods:(unsigned long long)a0 networkLookup:(long long)a1;

@end
