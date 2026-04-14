@interface IMDChatRepairController : NSObject

@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)repairChatIfNecessary:(id)a0;

@end
