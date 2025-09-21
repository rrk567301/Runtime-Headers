@class NSObject, NSString, NSDictionary, NSURL, NSData, BCSWebPresentmentParquetMessage, BCSWebPresentmentItemIdentifier;

@interface BCSWebPresentmentItem : BCSItem <BCSItemIdentifying, BCSPIRItemIdentifying, BCSPIRServerTypeProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BCSWebPresentmentItemIdentifier *identifier;
@property (retain, nonatomic) BCSWebPresentmentParquetMessage *message;
@property (retain, nonatomic) NSURL *logoURL;
@property (readonly, nonatomic) NSData *logoData;
@property (readonly, nonatomic) NSString *logoFormat;
@property (readonly, nonatomic) unsigned long long itemTTL;
@property (readonly, nonatomic) NSString *brandId;
@property (readonly, nonatomic) NSString *businessId;
@property (readonly, nonatomic) NSString *companyId;
@property (readonly, nonatomic) NSDictionary *localizedNames;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pirKey;
@property (readonly, nonatomic) long long serverType;

+ (id)itemFromStatement:(struct sqlite3_stmt { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)name;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBrandID:(id)a0 localizedNames:(id)a1;
- (id)initWithBrandID:(id)a0 defaultsDictionary:(id)a1;
- (id)initWithBrandID:(id)a0 localizedNames:(id)a1 businessId:(id)a2 companyId:(id)a3;
- (id)initWithMessage:(id)a0 logoURL:(id)a1;
- (BOOL)matchesItemIdentifying:(id)a0;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
