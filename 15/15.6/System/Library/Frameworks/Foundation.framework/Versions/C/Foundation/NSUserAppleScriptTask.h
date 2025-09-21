@interface NSUserAppleScriptTask : NSUserScriptTask

@property (setter=setParentDefaultTarget:) char isParentDefaultTarget;
@property (setter=setParentDefaultTarget:) char isParentDefaultTarget;

+ (char)isValidScriptFile:(id)a0 error:(id *)a1;

- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)executeWithAppleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeWithCompletionHandler:(id /* block */)a0;

@end
