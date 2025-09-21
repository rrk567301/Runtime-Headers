@class NSString;

@interface DAFolder : NSObject

@property (nonatomic) char hasRemoteChanges;
@property (copy, nonatomic) NSString *folderName;
@property (copy, nonatomic) NSString *folderID;
@property (copy, nonatomic) NSString *parentFolderID;
@property (nonatomic) long long dataclass;
@property (nonatomic) char isDefault;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)parentMailboxID;
- (id)mailboxID;

@end
