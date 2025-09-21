@class NSString;

@interface DAFolder : NSObject

@property (nonatomic) BOOL hasRemoteChanges;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *parentFolderID;
@property (nonatomic) long long dataclass;
@property (nonatomic) BOOL isDefault;

- (id)description;
- (id)mailboxID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)parentMailboxID;

@end
