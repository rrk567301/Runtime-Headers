@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)describeChangeType:(unsigned char)a0;
+ (id)describeSource:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)identifier;
- (unsigned char)source;
- (unsigned char)changeType;
- (id)middleName;
- (id)nickname;
- (double)score;
- (id)firstName;
- (id)jobTitle;
- (id)organizationName;
- (id)sourceIdentifier;
- (id)lastName;
- (id)phoneticMiddleName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)relatedNames;
- (id)init_;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (id)streetNames;
- (id)cityNames;
- (BOOL)isEqualToContactNameRecord:(id)a0;

@end
