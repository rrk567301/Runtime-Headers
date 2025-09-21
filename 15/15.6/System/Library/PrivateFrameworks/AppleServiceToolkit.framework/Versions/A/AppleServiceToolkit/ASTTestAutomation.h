@interface ASTTestAutomation : NSObject

@property (nonatomic) char testAutomationEnabled;

+ (id)sharedInstance;
+ (void)postServerRequest:(id)a0;
+ (void)postServerResponse:(id)a0;

- (id)init;

@end
