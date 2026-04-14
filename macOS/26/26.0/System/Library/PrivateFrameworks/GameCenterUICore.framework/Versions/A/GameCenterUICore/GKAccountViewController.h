@class NSString;

@interface GKAccountViewController : GKServerWebViewController

@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL shouldUploadContacts;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)finish;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)processGameKitURLComponents:(id)a0;
- (void)uploadContacts;

@end
