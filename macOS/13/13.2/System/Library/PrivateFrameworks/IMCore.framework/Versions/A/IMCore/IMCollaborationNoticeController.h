@interface IMCollaborationNoticeController : NSObject

+ (id)sharedInstance;

- (id)init;
- (id)listener;
- (void)dismissNotice:(id)a0;
- (void)collaborationNoticesDidChangeForChatGUIDs:(id)a0;
- (id)remoteDaemon;
- (void)markAsViewedForNotice:(id)a0;
- (void)fetchCollaborationNoticesForChatGUID:(id)a0 completionHandler:(id /* block */)a1;

@end
