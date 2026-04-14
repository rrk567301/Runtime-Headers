@class OBTemplateView, TCCSystemTCCMigrator, NSObject, NSMutableArray;
@protocol OS_tcc_server, MBSecondPartyHost;

@interface TCCSystemTCCMigrationMainViewController : NSViewController

@property (nonatomic) NSObject<OS_tcc_server> *tccServer;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) TCCSystemTCCMigrator *systemTCCMigrator;
@property (retain, nonatomic) NSMutableArray *accessibility;
@property (retain, nonatomic) NSMutableArray *developerTools;
@property (retain, nonatomic) NSMutableArray *fullDiskAccess;
@property (retain, nonatomic) NSMutableArray *listenEvent;
@property (retain, nonatomic) NSMutableArray *postEvent;
@property (retain, nonatomic) NSMutableArray *screenSharing;
@property (retain, nonatomic) NSMutableArray *screenRecording;
@property (weak, nonatomic) id<MBSecondPartyHost> hostDelegate;

- (void)viewDidLoad;
- (void)setup;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)createBulletListAndItems:(id)a0;
- (id)createDisclosingListViewAndItemsForService:(id)a0 items:(id)a1;
- (void)setupBuddyTCCItemView;

@end
