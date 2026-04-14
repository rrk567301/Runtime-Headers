@interface DDShowDateController : NSObject <DDMiscActionProtocol>

+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)displaysNonModalUI;
+ (BOOL)requiresService;
+ (BOOL)requiresViewBridge;

@end
