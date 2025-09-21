@class BCSBusinessCallerItemIdentifier, NSString, NSDictionary, NSURL, BCSCallerIdParquetMessage, NSData;

@interface BCSBusinessCallerItem : BCSItem <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) BCSBusinessCallerItemIdentifier *identifier;
@property (copy, nonatomic) BCSCallerIdParquetMessage *message;
@property (copy, nonatomic) NSURL *logoURL;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *department;
@property (readonly, nonatomic) NSDictionary *localizedNames;
@property (readonly, nonatomic) NSDictionary *localizedDepartments;
@property (readonly, nonatomic) NSData *logo;
@property (readonly, nonatomic) char isVerified;
@property (readonly, nonatomic) NSString *logoFormat;

+ (id)itemsFromRecords:(id)a0;
+ (id)itemFromStatement:(struct sqlite3_stmt { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)itemIdentifier;
- (long long)type;
- (void)setPhoneNumber:(id)a0;
- (id)initWithParquetMessage:(id)a0;
- (id)initWithPhoneNumber:(id)a0 name:(id)a1 department:(id)a2 logoURL:(id)a3 logo:(id)a4 logoFormat:(id)a5 verified:(char)a6;
- (id)initWithPhoneNumber:(id)a0 phoneHash:(long long)a1 localizedNames:(id)a2 localizedDepartments:(id)a3 logoURL:(id)a4 logo:(id)a5 logoFormat:(id)a6 verified:(char)a7;
- (char)matchesItemIdentifying:(id)a0;
- (long long)truncatedHash;
- (void)updateStatementValues:(struct sqlite3_stmt { } *)a0 withItemIdentifier:(id)a1;

@end
