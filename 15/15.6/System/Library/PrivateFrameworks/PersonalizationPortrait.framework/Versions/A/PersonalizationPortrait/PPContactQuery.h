@class NSArray, NSString;

@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *matchingIdentifiers;
@property (retain, nonatomic) NSString *matchingName;
@property (retain, nonatomic) NSString *matchingEmail;
@property (retain, nonatomic) NSString *matchingPhone;
@property (retain, nonatomic) NSString *matchingPostalAddress;
@property (nonatomic) unsigned char domain;
@property (retain, nonatomic) NSString *targetBundleIdentifier;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) char onlyQueryMostRelevantContacts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasNoConstraints;
- (char)isEqualToContactQuery:(id)a0;

@end
