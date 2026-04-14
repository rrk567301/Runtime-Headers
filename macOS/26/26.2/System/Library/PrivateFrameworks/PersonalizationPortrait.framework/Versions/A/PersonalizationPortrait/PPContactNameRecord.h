@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)describeChangeType:(unsigned char)a0;
+ (id)describeSource:(unsigned char)a0;

- (long long)compare:(id)a0;
- (id)lastName;
- (unsigned char)changeType;
- (id)organizationName;
- (id)identifier;
- (id)sourceIdentifier;
- (id)firstName;
- (id)initWithCoder:(id)a0;
- (id)phoneticMiddleName;
- (id)phoneticFirstName;
- (double)score;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned char)source;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nickname;
- (id)description;
- (id)jobTitle;
- (id)middleName;
- (id)relatedNames;
- (id)phoneticLastName;
- (id)init_;
- (id)cityNames;
- (id)initWithIdentifier:(id)a0 score:(double)a1 source:(unsigned char)a2 sourceIdentifier:(id)a3 changeType:(unsigned char)a4 firstName:(id)a5 phoneticFirstName:(id)a6 middleName:(id)a7 phoneticMiddleName:(id)a8 lastName:(id)a9 phoneticLastName:(id)a10 organizationName:(id)a11 jobTitle:(id)a12 nickname:(id)a13 relatedNames:(id)a14 streetNames:(id)a15 cityNames:(id)a16;
- (BOOL)isEqualToContactNameRecord:(id)a0;
- (id)streetNames;

@end
