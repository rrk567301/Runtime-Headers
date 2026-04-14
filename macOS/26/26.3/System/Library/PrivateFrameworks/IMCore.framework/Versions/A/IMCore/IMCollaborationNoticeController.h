@interface IMCollaborationNoticeController : NSObject

+ (id)sharedInstance;

- (id)listener;
- (id)init;
- (void)collaborationNoticesDidChangeForChatGUIDs:(id)a0;
- (void)dismissNotice:(id)a0;
- (void)fetchCollaborationNoticesForChatGUIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)markAsViewedForNotice:(id)a0;
- (id)remoteDaemon;

@end
