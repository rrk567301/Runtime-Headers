@class NSWindow, FLFollowUpActionHandler, FLFollowUpController;

@interface FLFollowUpSystemSettingsController : NSObject

@property (class, readonly, nonatomic) FLFollowUpSystemSettingsController *sharedController;

@property (retain, nonatomic) FLFollowUpController *followupController;
@property (retain, nonatomic) FLFollowUpActionHandler *actionHandler;
@property (retain, nonatomic) NSWindow *sheet;
@property (retain, nonatomic) NSWindow *parentWindow;

+ (id)extractedFollowUpIdentifierFromSidebarID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isSidebarIDSingleAction:(id)a0;
- (id)extensionIDToLoadForIdentifier:(id)a0;
- (void)handleSidebarIDSingleAction:(id)a0 window:(id)a1 completion:(id /* block */)a2;

@end
