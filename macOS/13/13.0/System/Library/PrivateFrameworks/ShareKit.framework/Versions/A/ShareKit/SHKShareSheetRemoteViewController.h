@interface SHKShareSheetRemoteViewController : NSRemoteViewController <SHKShareSheetHostProtocol>

@property (copy, nonatomic) id /* block */ handleCollaborationModeUpdated;
@property (copy, nonatomic) id /* block */ handleOptionsUpdated;
@property (copy, nonatomic) id /* block */ handleEditButtonClicked;
@property (copy, nonatomic) id /* block */ handlePresent;
@property (copy, nonatomic) id /* block */ performShareTransport;
@property (copy, nonatomic) id /* block */ performAction;
@property (copy, nonatomic) id /* block */ performSuggestion;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)present;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)updatedCollaborationMode:(BOOL)a0;
- (void)updatedOptions:(id)a0;
- (void)editButtonClicked;
- (void)performShareTransportWithIdentifier:(id)a0;
- (void)performSuggestionWithIdentifier:(id)a0 sessionID:(id)a1 isRestricted:(BOOL)a2;
- (void)performActionWithIdentifier:(id)a0;
- (id)shareSheetClientProxy;

@end
