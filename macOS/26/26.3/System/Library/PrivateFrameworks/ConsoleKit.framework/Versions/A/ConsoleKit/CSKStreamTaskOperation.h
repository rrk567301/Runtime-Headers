@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (BOOL)isConcurrent;
- (BOOL)isReady;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithTask:(id)a0;
- (void)main;
- (id)name;
- (void).cxx_destruct;
- (void)_signalDelegateDidFinishIfNeeded;

@end
