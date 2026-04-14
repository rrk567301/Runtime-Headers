@class NSString, NSDictionary, NSData, NSURL, NSNumber;

@interface DCPresentmentProposalReaderMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSString *organizationalUnit;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) NSData *iconDigest;
@property (readonly, nonatomic) unsigned long long iconDigestAlgorithm;
@property (readonly, nonatomic) NSString *iconMediaType;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSNumber *merchantCategoryCode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationalUnit:(id)a2 iconData:(id)a3 iconURL:(id)a4 iconDigest:(id)a5 iconDigestAlgorithm:(unsigned long long)a6 iconMediaType:(id)a7 privacyPolicyURL:(id)a8 merchantCategoryCode:(id)a9;

@end
