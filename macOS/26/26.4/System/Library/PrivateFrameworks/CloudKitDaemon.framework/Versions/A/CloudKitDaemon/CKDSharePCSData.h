@class NSString, CKRecordID, NSData, NSDate, CKRecordZoneID, CKDZonePCSData;

@interface CKDSharePCSData : CKDPCSData <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKRecordID *shareID;
@property (nonatomic) struct _OpaquePCSShareProtection { } *encryptedInvitedPCS;
@property (retain, nonatomic) NSDate *shareModificationDate;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) NSString *shareEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic) long long myParticipantRole;
@property (nonatomic) long long myParticipantPermission;
@property (nonatomic) struct _OpaquePCSShareProtection { } *myParticipantPCS;
@property (copy, nonatomic) NSData *myParticipantPCSData;
@property (nonatomic) struct _OpaquePCSShareProtection { } *invitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { } *preKeyRollInvitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { } *publicPCS;
@property (copy, nonatomic) NSString *publicPCSEtag;
@property (copy, nonatomic) NSData *publicPCSData;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;

+ (id)dataWithShare:(id)a0 serviceType:(unsigned long long)a1;
+ (id)dataWithShareID:(id)a0 pcsData:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)needsParentZonePCSToUnlockInvitedPCS;
- (void)encodeWithCoder:(id)a0;
- (id)itemID;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithShareID:(id)a0 pcsData:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
