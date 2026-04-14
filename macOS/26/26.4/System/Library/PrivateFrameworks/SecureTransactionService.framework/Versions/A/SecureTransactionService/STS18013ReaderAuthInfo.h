@class NSString, NSData, NSURL, NSNumber, STS18013ReaderAnalyticsData;

@interface STS18013ReaderAuthInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *organization;
@property (readonly, nonatomic) NSString *organizationUnit;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, nonatomic) NSData *iconDigest;
@property (readonly, nonatomic) unsigned long long iconDigestAlgorithm;
@property (readonly, nonatomic) NSString *iconMediaType;
@property (readonly, nonatomic) NSURL *privacyPolicyURL;
@property (readonly, nonatomic) NSNumber *merchantCategoryCode;
@property (readonly, nonatomic) NSData *certificateData;
@property (readonly, nonatomic) STS18013ReaderAnalyticsData *readerAnalyticsData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 organization:(id)a1 organizationUnit:(id)a2 iconData:(id)a3 iconURL:(id)a4 iconDigest:(id)a5 iconDigestAlgorithm:(unsigned long long)a6 iconMediaType:(id)a7 privacyPolicyURL:(id)a8 merchantCategoryCode:(id)a9 certificateData:(id)a10 readerAnalyticsData:(id)a11;

@end
