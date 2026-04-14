@class NSString, NSDictionary;

@interface APPolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *content;
@property (copy) NSDictionary *contentDescriptions;
@property (copy) NSDictionary *parameters;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

+ (id)policy;
+ (id)_localizedContentDescriptionsForFormat:(id)a0;
+ (id)policyWithDictionary:(id)a0;
+ (id)policyWithIdentifier:(id)a0;
+ (id)policyWithIdentifier:(id)a0 content:(id)a1;
+ (id)policyWithIdentifier:(id)a0 content:(id)a1 contentDescriptions:(id)a2 parameters:(id)a3;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithIdentifier:(id)a0 content:(id)a1;
- (id)initWithIdentifier:(id)a0 content:(id)a1 contentDescriptions:(id)a2 parameters:(id)a3;

@end
