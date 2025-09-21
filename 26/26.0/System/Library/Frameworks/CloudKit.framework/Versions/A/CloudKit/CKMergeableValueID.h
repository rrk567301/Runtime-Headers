@class NSData, NSString, CKRoughlyEquivalentProperties;

@interface CKMergeableValueID : NSObject <CKXPCSuitableString, CKRoughlyEquivalent, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *identifier;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *zoneOwner;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSString *recordFieldName;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

- (id)recordID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)zoneID;
- (id)name;
- (id)key;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)CKXPCSuitableString;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2;
- (id)initWithData:(id)a0 zoneName:(id)a1 zoneOwner:(id)a2 recordName:(id)a3 recordFieldName:(id)a4 encrypted:(BOOL)a5;
- (id)initWithName:(id)a0 recordID:(id)a1 key:(id)a2 encrypted:(BOOL)a3;
- (id)initWithName:(id)a0 zoneID:(id)a1;
- (BOOL)isEqualToMergeableValueID:(id)a0;

@end
