@interface COConditionBundle : NSBundle

- (id)initWithURL:(id)a0;
- (char)loadAndReturnError:(id *)a0;
- (Class)classNamed:(id)a0;
- (id)conditions;
- (Class)classNamed:(id)a0 error:(id *)a1;
- (char)isRunnable:(id *)a0;

@end
