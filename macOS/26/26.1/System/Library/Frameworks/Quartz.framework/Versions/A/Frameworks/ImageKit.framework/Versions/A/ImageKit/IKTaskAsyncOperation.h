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

- (void)done;
- (BOOL)isCanceled;
- (struct { unsigned long long x0; BOOL x1; } *)taskState;
- (void)cancel;
- (void)main;
- (void)dealloc;
- (id)init;

@end
