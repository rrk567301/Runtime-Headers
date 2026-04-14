@interface IMDCoreSpotlightValidationUtilities : NSObject

+ (void)_loadItemsWithUniqueIdentifiers:(id)a0 expectedDomainIdentifier:(id)a1 completionBlock:(id /* block */)a2;
+ (void)checkForIndexedAttachmentGUIDs:(id)a0 completionBlock:(id /* block */)a1;
+ (void)checkForIndexedChatGUIDs:(id)a0 completionBlock:(id /* block */)a1;
+ (void)checkForIndexedMessageGUIDs:(id)a0 completionBlock:(id /* block */)a1;

@end
