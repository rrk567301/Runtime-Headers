@interface AXTrampoline : NSObject

@property (weak, nonatomic) id caller;
@property (weak, nonatomic) Class targetClass;
@property (nonatomic) char warnAboutUnknownSelectors;

+ (void)methodDoesNotExistSentinal;
+ (id)methodNotFoundSentinal;
+ (id)trampolineWithCaller:(id)a0 targetClass:(Class)a1;

- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void /* function */ *)_findIMPForSelector:(SEL)a0;
- (char)callerIsClass;
- (id)initWithCaller:(id)a0 targetClass:(Class)a1;

@end
