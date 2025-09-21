@class NSConditionLock, NSObject;
@protocol OS_dispatch_queue;

@interface AOSTransaction : NSObject <NSSecureCoding> {
    unsigned char didSucceed;
    unsigned char didFinish;
    void *result;
    struct __CFError { } *error;
    void /* function */ *callbackFunction;
    id /* block */ callbackBlock;
    NSObject<OS_dispatch_queue> *callbackQueue;
    void *context;
    NSConditionLock *waitLock;
    void /* function */ *contextRetain;
    void /* function */ *contextRelease;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)finalize;
- (id)result;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)error;
- (BOOL)isSuccessful;

@end
