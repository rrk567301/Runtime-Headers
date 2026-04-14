@class NSString, CSKStreamTask;
@protocol CSKStreamTaskOperationDelegate;

@interface CSKStreamTaskOperation : NSOperation

@property (nonatomic) BOOL delegateWasSignaled;
@property (weak, nonatomic) id<CSKStreamTaskOperationDelegate> delegate;
@property (readonly, nonatomic) CSKStreamTask *representedTask;
@property (retain, nonatomic) NSString *initiatorIdentifier;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)initWithTask:(id)a0;
- (BOOL)isAsynchronous;
- (id)name;
- (BOOL)isReady;
- (BOOL)isConcurrent;
- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (void)_signalDelegateDidFinishIfNeeded;

@end
