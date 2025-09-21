@class NSString, CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <CKDatabaseNotification, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (nonatomic) long long databaseScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRemoteNotificationDictionary:(id)a0;

@end
