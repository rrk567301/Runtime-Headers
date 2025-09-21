@class WBSWebExtensionData;

@interface WBSSavePermissionsToStorageInformation : NSObject

@property (readonly, nonatomic) WBSWebExtensionData *webExtension;
@property (readonly, nonatomic) char permissionsWereUpdatedDueToAnExternalChange;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebExtension:(id)a0 permissionsWereUpdatedDueToAnExternalChange:(char)a1;

@end
