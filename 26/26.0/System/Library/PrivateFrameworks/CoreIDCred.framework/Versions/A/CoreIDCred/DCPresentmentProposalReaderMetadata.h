@class NSString, NSDictionary, NSData, NSURL, NSNumber;

@interface DCPresentmentProposalReaderMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSString *organizationalUnit;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) NSString *iconMediaType;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSNumber *merchantCategoryCode;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationalUnit:(id)a2 iconData:(id)a3 iconURL:(id)a4 iconMediaType:(id)a5 privacyPolicyURL:(id)a6 merchantCategoryCode:(id)a7;

@end
