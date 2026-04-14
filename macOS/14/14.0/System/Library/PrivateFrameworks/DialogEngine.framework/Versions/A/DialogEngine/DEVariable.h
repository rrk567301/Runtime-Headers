@class NSString;

@interface DEVariable : NSObject

@property struct shared_ptr<siri::dialogengine::Variable> { struct Variable *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;

- (id)init;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)toString:(int)a0;
- (void *)getSharedPtr;
- (id)initWithSharedPtr:(void *)a0;

@end
