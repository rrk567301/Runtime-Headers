@class NSMutableArray, NSString;
@protocol NSDynamicPropertyContainer;

@interface NSKeyValueDependencyContext : NSObject

@property (class, readonly) NSKeyValueDependencyContext *currentContext;
@property (class, readonly) NSMutableArray *contextStack;

@property id<NSDynamicPropertyContainer> container;
@property (copy) NSString *key;
@property (readonly, copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long invalidationCount;

- (void)cancel;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)becomeCurrentContext;
- (id)initWithInvalidationHandler:(id /* block */)a0;
- (void)resignCurrentContext;

@end
