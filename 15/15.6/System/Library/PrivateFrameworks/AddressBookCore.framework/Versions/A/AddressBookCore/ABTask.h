@class NSString;

@interface ABTask : NSObject {
    char _cancelled;
}

@property (readonly, getter=isCancelled) char cancelled;
@property (copy) NSString *name;

+ (id)taskWithBlock:(id /* block */)a0;
+ (char)isValidResult:(id)a0;
+ (id)taskWithSubtasks:(id)a0;
+ (id)taskWithTask:(id)a0 transform:(id /* block */)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0;
- (char)cancel;
- (id)run:(id *)a0;

@end
