@interface DDShowDateController : NSObject <DDMiscActionProtocol>

+ (char)requiresService;
+ (char)displaysNonModalUI;
+ (char)requiresViewBridge;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

@end
