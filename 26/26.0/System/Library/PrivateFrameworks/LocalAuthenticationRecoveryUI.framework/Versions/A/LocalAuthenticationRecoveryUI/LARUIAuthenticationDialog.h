@class LACAirDB, NSString, LAContext, NSArray, NSMutableDictionary, LARUIAuthenticationView;
@protocol LARUIAuthenticationDialogDelegate;

@interface LARUIAuthenticationDialog : NSWindowController {
    LACAirDB *_airDb;
    NSArray *_users;
    NSMutableDictionary *_deviceNodesWithVolumeNames;
    NSArray *_sortedUsers;
    LARUIAuthenticationView *_dialog;
}

@property (retain, nonatomic) LAContext *context;
@property (copy, nonatomic) id /* block */ reply;
@property (weak, nonatomic) id<LARUIAuthenticationDialogDelegate> delegate;
@property (copy, nonatomic) NSString *localizedAuthenticationReason;
@property (nonatomic) BOOL ownersOnly;
@property (nonatomic) BOOL adminsOnly;
@property (nonatomic) BOOL useBootPasswordCredential;
@property (copy, nonatomic) NSString *volumeUuid;

- (id)initWithContext:(id)a0;
- (void)_setEnabled:(BOOL)a0;
- (void)showWindow:(id)a0;
- (void).cxx_destruct;
- (void)_setupWindow;
- (void)cancelClicked:(id)a0;
- (void)okClicked:(id)a0;
- (id)_displayUserName:(id)a0 userNamesWithDeviceNodes:(id)a1;
- (id)_foo;
- (id)_usersWithError:(id *)a0;
- (id)_volumeNameForDeviceNode:(id)a0;

@end
