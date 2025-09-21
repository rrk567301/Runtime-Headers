@class NSString;

@interface CNTask : NSObject {
    char _cancelled;
}

@property (readonly, getter=isCancelled) char cancelled;
@property (copy) NSString *name;

+ (id)taskWithResult:(id)a0;
+ (id)taskWithBlock:(id /* block */)a0;
+ (id)taskWithError:(id)a0;
+ (id)taskWithName:(id)a0 block:(id /* block */)a1;
+ (id)taskWithName:(id)a0 error:(id)a1;
+ (id)taskWithName:(id)a0 result:(id)a1;
+ (id)taskWithName:(id)a0 subtasks:(id)a1;

- (id)description;
- (id)init;
- (id)run;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (char)cancel;
- (id)profileWithTimeProvider:(id)a0 os_log:(id)a1;
- (id)flatMap:(id /* block */)a0;
- (id)map:(id /* block */)a0;
- (id)recover:(id /* block */)a0;
- (id)run:(id *)a0;
- (id)runWithRetryDelegate:(id)a0;

@end
