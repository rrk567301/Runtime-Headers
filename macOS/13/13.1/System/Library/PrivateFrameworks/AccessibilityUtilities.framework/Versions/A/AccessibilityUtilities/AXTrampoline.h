@interface AXTrampoline : NSObject

@property (weak, nonatomic) id caller;
@property (weak, nonatomic) Class targetClass;
@property (nonatomic) BOOL warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)trampolineWithCaller:(id)a0 targetClass:(Class)a1;
+ (id)methodNotFoundSentinal;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCaller:(id)a0 targetClass:(Class)a1;
- (BOOL)callerIsClass;
- (void /* function */ *)_findIMPForSelector:(SEL)a0;

@end
