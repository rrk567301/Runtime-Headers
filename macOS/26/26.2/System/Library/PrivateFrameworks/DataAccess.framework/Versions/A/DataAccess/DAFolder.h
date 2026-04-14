@class NSString;

@interface DAFolder : NSObject

@property (nonatomic) BOOL hasRemoteChanges;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *parentFolderID;
@property (nonatomic) long long dataclass;
@property (nonatomic) BOOL isDefault;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mailboxID;
- (void).cxx_destruct;
- (id)description;
- (id)parentMailboxID;

@end
