@class NSString, NSSet;

@interface PKSharedAccountCloudStoreZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (copy, nonatomic) NSSet *sharedUsersAltDSIDs;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)zoneType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToSharedAccountCloudStoreZone:(id)a0;

@end
