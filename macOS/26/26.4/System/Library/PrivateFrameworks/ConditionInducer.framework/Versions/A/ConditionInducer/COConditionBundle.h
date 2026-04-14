@interface COConditionBundle : NSBundle

- (id)initWithURL:(id)a0;
- (id)conditions;
- (BOOL)loadAndReturnError:(id *)a0;
- (Class)classNamed:(id)a0;
- (Class)classNamed:(id)a0 error:(id *)a1;
- (BOOL)isRunnable:(id *)a0;

@end
