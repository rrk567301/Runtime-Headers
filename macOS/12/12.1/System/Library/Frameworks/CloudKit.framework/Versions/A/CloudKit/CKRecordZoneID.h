@class NSString;

@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *anonymousCKUserID;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, copy, nonatomic) NSString *ownerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedRecordZoneIDWithName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1;
- (id)_initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2;
- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)sqliteRepresentation;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)initWithZoneName:(id)a0 ownerName:(id)a1 anonymousCKUserID:(id)a2;
- (id)ckShortDescription;
- (long long)compareToRecordZoneID:(id)a0;
- (BOOL)isDefaultRecordZoneID;
- (BOOL)isSystemRecordZoneID;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)CKXPCSuitableString;

@end
