@class NSString;

@interface IKTaskAsyncOperation : NSOperation {
    BOOL _done;
    struct { unsigned long long _progressIndex; BOOL _shouldAbort; } _state;
}

@property (retain) id target;
@property (retain) id object;
@property (retain) id delegate;
@property (copy) NSString *queueIdentifier;
@property SEL selector;
@property SEL cancelSelector;

- (struct { unsigned long long x0; BOOL x1; } *)taskState;
- (void)cancel;
- (BOOL)isCanceled;
- (void)main;
- (id)init;
- (void)done;
- (void)dealloc;

@end
