@class NSString;

@interface ABTask : NSObject {
    BOOL _cancelled;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (copy) NSString *name;

+ (id)taskWithBlock:(id /* block */)a0;
+ (BOOL)isValidResult:(id)a0;
+ (id)taskWithSubtasks:(id)a0;
+ (id)taskWithTask:(id)a0 transform:(id /* block */)a1;

- (id)run:(id *)a0;
- (BOOL)cancel;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;

@end
