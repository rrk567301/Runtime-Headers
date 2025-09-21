@class NSMutableArray, NSConditionLock;

@interface _SCRCThreadTask : NSObject {
    id _target;
    SEL _selector;
    NSConditionLock *_waitLock;
    unsigned int _mask;
    NSMutableArray *_objectArray;
}

+ (id)newThreadTaskWithTarget:(id)a0 selector:(SEL)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;

- (void)dealloc;
- (void).cxx_destruct;
- (void)fire;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 cancelMask:(unsigned int)a2 count:(unsigned int)a3 firstObject:(id)a4 moreObjects:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
- (void)setWaitLock:(id)a0;

@end
