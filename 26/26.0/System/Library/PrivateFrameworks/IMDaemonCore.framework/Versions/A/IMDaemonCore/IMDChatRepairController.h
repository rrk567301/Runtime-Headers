@interface IMDChatRepairController : NSObject

@property (nonatomic, weak) void /* function */ delegate;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)repairChatIfNecessary:(id)a0;

@end
