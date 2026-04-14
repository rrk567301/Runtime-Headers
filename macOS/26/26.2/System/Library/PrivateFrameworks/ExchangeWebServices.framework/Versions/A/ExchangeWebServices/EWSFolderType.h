@class EWSPermissionSetType;

@interface EWSFolderType : EWSBaseFolderType

@property (retain, nonatomic) EWSPermissionSetType *PermissionSet;
@property (nonatomic) long long UnreadCount;
@property (nonatomic) BOOL UnreadCountSpecified;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;

@end
