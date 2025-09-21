@class NSString;

@interface BRCUserNotificationRequestAccess : NSObject

@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) NSString *userRecordName;
@property (readonly, nonatomic) NSString *accountID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecordName:(id)a0 zoneName:(id)a1 ownerName:(id)a2 userRecordName:(id)a3 accountID:(id)a4;
- (id)initWithCKShare:(id)a0 userRecordName:(id)a1 accountID:(id)a2;

@end
