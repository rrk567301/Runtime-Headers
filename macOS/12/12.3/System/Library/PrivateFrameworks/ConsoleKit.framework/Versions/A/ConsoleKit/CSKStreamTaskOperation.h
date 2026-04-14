@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)name;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)isReady;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (id)initWithTask:(id)a0;
- (void)_signalDelegateDidFinishIfNeeded;

@end
