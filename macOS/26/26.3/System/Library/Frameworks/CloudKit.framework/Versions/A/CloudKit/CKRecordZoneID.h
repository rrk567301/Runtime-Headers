@class NSString, CKRoughlyEquivalentProperties;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKRoughlyEquivalent, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *anonymousCKUserID;
@property (readonly, nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *ownerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (id)cachedRecordZoneIDWithName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;

- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)ckShortDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)CKPropertiesDescription;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)init;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasSameOwnerAs:(id)a0;
- (id)CKXPCSuitableString;
- (id)_initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;
- (long long)compareToRecordZoneID:(id)a0;
- (id)copyWithAnonymousCKUserID:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2 databaseScope:(long long)a3;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 databaseScope:(long long)a2;
- (BOOL)isDefaultRecordZoneID;
- (BOOL)isSystemRecordZoneID;

@end
