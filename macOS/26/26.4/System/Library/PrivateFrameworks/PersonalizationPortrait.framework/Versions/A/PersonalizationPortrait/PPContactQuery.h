@class NSArray, NSString;

@interface PPContactQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *matchingIdentifiers;
@property (retain, nonatomic) NSString *matchingName;
@property (retain, nonatomic) NSString *matchingEmail;
@property (retain, nonatomic) NSString *matchingPhone;
@property (retain, nonatomic) NSString *matchingPostalAddress;
@property (nonatomic) unsigned char domain;
@property (retain, nonatomic) NSString *targetBundleIdentifier;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) BOOL onlyQueryMostRelevantContacts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)hasNoConstraints;
- (BOOL)isEqualToContactQuery:(id)a0;

@end
