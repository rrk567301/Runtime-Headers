@class NSURL, NSOperationQueue;

@interface _TtCC19HealthOrchestration26FileCoordinatorInputSignal9Presenter : NSObject <NSFilePresenter> {
    void /* unknown type, empty encoding */ observedURL;
    void /* unknown type, empty encoding */ signal;
}

@property (nonatomic, readonly) NSURL *presentedItemURL;
@property (nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue;

- (void).cxx_destruct;
- (id)init;
- (void)presentedItemDidChange;

@end
