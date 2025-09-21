@class NSArray;

@interface WBSTabDialogInformation : NSObject {
    id /* block */ _dismissalBlock;
    char _isInvokingPresentationBlock;
    id /* block */ _presentationBlock;
}

@property (nonatomic) struct { int webProcessID; unsigned long long tabID; } slot;
@property (copy, nonatomic) NSArray *cancellationExemptions;
@property (readonly, nonatomic, getter=isBlockingWebProcess) char blockingWebProcess;
@property (readonly, nonatomic, getter=isDismissed) char dismissed;
@property (readonly, nonatomic, getter=isPresented) char presented;

- (id)description;
- (void).cxx_destruct;
- (void)presentIfNeeded;
- (void)dismissWithResponse:(id)a0;
- (id)initWithPresentationBlock:(id /* block */)a0 dismissalBlock:(id /* block */)a1 blocksWebProcessUntilDismissed:(char)a2;
- (char)isExemptFromCancellationInContext:(id)a0;

@end
