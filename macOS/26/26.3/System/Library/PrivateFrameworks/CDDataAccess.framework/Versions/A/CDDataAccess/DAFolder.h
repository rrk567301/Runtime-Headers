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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)parentMailboxID;

@end
