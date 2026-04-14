@class NSData;

@interface CKDistributedSiteIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSData *modifier;

+ (id)SHADescription:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 modifier:(id)a1;
- (id)descriptionWithStringSiteIdentifiers;

@end
