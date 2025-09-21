@interface SHKShareSheetRemoteViewController : NSRemoteViewController <SHKShareSheetHostProtocol>

@property (copy, nonatomic) id /* block */ handleCollaborationModeUpdated;
@property (copy, nonatomic) id /* block */ handleCollaborationOptionsUpdated;
@property (copy, nonatomic) id /* block */ handleOptionsUpdated;
@property (copy, nonatomic) id /* block */ handleEditButtonClicked;
@property (copy, nonatomic) id /* block */ handlePresent;
@property (copy, nonatomic) id /* block */ performShareTransport;
@property (copy, nonatomic) id /* block */ performAction;
@property (copy, nonatomic) id /* block */ performSuggestion;

- (void)present;
- (id)exportedInterface;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)updatedOptions:(id)a0;
- (void)editButtonClicked;
- (void)performActionWithIdentifier:(id)a0;
- (void)performShareTransportWithIdentifier:(id)a0;
- (void)performSuggestionWithIdentifier:(id)a0 sessionID:(id)a1 isRestricted:(BOOL)a2 isRTS:(BOOL)a3;
- (id)shareSheetClientProxy;
- (void)updatedCollaborationMode:(BOOL)a0;
- (void)updatedCollaborationOptions:(id)a0;

@end
