@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) char delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)name;
- (void).cxx_destruct;
- (char)isReady;
- (void)cancel;
- (char)isAsynchronous;
- (char)isConcurrent;
- (void)main;
- (id)initWithTask:(id)a0;
- (void)_signalDelegateDidFinishIfNeeded;

@end
