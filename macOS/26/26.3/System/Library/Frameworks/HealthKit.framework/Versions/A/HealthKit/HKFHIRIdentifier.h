@class NSString;

@interface HKFHIRIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *stringValue;

+ (id)FHIRIdentifierWithString:(id)a0 error:(out id *)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)identifierForContainedResourceWithIdentifier:(id)a0 error:(id *)a1;
- (id)initWithResourceType:(id)a0 identifier:(id)a1;
- (id)parentResourceIdentifierWithError:(id *)a0;

@end
