@class NSString;

@interface HKHealthConceptIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *underlyingIdentifier;
@property (readonly, copy, nonatomic) NSString *domain;

+ (id)baseConceptIdentifierWithSemanticIdentifierString:(id)a0;
+ (id)medicationConceptIdentifierWithSemanticIdentifierString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 underlyingIdentifier:(id)a1;

@end
