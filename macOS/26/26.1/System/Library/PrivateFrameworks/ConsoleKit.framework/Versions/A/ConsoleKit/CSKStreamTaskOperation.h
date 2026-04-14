@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (BOOL)isConcurrent;
- (id)initWithTask:(id)a0;
- (BOOL)isReady;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)name;
- (void)_signalDelegateDidFinishIfNeeded;

@end
