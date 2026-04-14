@class NSString, NSDictionary;

@interface STVersionVectorNode : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long count;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)debugDescription;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (long long)compare:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)increment;
- (void)join:(id)a0;
- (BOOL)isEqualToNode:(id)a0;

@end
