@class KHDBMessageOptions;
@protocol KHDBSelectorDelegate;

@interface KHDBSelector : NSObject {
    SEL _selector;
    KHDBMessageOptions *_messageOptions;
}

@property (nonatomic) long long selectorPriority;
@property (nonatomic) id<KHDBSelectorDelegate> delegate;

+ (void)initialize;
+ (id)argumentKeys;

- (void)dealloc;
- (id)description;
- (SEL)selector;
- (void)asycPerformSelectorOnHgQueue:(id)a0 forTarget:(id)a1;
- (void)asycPerformSelectorOnHgQueue:(id)a0 forTarget:(id)a1 withObjects:(id)a2;
- (void)asycPerformSelectorOnQueue:(id)a0 forTarget:(id)a1;
- (void)asycPerformSelectorOnQueue:(id)a0 forTarget:(id)a1 withObjects:(id)a2;
- (id)initWithSelector:(SEL)a0 messageOptions:(id)a1;
- (id)messageOptions;
- (id)newSelectorOperationForTarget:(id)a0 withObject:(id)a1 additionalObjects:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (char)performBoolSelectorOnObject:(id)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3 arg4:(id)a4;
- (id)performIdSelectorOnObject:(id)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3 arg4:(id)a4;
- (id)performSelectorOnObject:(id)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3 arg4:(id)a4;
- (void)performVoidSelectorOnObject:(id)a0 arg1:(id)a1 arg2:(id)a2 arg3:(id)a3 arg4:(id)a4;

@end
