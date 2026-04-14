@class SMWelcomeController, NSMutableString;

@interface SMDoneController : NSObject

@property (retain) SMWelcomeController *parentController;
@property unsigned long long paneID;
@property (retain) NSMutableString *paneStory;

- (void).cxx_destruct;
- (id)titleText;
- (id)bodyText;
- (id)initWithParentController:(id)a0;
- (id)titleSymbol;
- (void)performPostMigrationTasks;

@end
