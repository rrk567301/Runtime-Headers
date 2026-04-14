@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long queryNotificationReason;
@property (copy, nonatomic) NSDictionary *recordFields;
@property (copy, nonatomic) CKRecordID *recordID;
@property (nonatomic) long long databaseScope;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)a0;
- (BOOL)isPublicDatabase;

@end
