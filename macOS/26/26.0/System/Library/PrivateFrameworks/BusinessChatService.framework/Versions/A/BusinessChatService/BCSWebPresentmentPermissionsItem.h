@class NSString, NSData, NSObject, BCSWebPresentmentItemIdentifier;

@interface BCSWebPresentmentPermissionsItem : BCSItem <BCSItemIdentifying, BCSPIRItemIdentifying, BCSPIRServerTypeProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BCSWebPresentmentItemIdentifier *identifier;
@property (retain, nonatomic) NSString *brandId;
@property (retain, nonatomic) NSData *data;
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
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBrandID:(id)a0;
- (id)initWithBrandID:(id)a0 data:(id)a1;
- (BOOL)matchesItemIdentifying:(id)a0;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
