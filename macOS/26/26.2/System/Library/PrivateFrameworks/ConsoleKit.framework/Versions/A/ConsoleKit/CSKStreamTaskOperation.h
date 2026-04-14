@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (void)cancel;
- (BOOL)isReady;
- (void)main;
- (void).cxx_destruct;
- (id)initWithTask:(id)a0;
- (id)name;
- (void)_signalDelegateDidFinishIfNeeded;

@end
