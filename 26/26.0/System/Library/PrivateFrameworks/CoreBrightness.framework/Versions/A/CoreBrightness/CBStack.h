@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CBStack : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property unsigned long long length;
@property (readonly, nonatomic) id objectToPop;
@property (readonly, nonatomic) NSMutableArray *stack;

- (void)clear;
- (void)dealloc;
- (id)init;
- (id)initWithLength:(unsigned long long)a0;
- (id)popObj;
- (void)printStack;
- (void)pushObj:(id)a0;

@end
