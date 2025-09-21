@class NSString, EWSUserIdType;

@interface EWSBasePermissionType : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) EWSUserIdType *UserId;
@property (nonatomic) char CanCreateItems;
@property (nonatomic) char CanCreateSubFolders;
@property (nonatomic) char IsFolderOwner;
@property (nonatomic) char IsFolderVisible;
@property (nonatomic) char IsFolderContact;
@property (nonatomic) long long EditItems;
@property (nonatomic) long long DeleteItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void).cxx_destruct;

@end
