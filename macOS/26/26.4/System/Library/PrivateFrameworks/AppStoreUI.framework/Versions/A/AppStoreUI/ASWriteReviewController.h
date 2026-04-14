@class ASWriteReviewWindowController, ASWriteReviewConfiguration;

@interface ASWriteReviewController : NSObject

@property (retain, nonatomic) ASWriteReviewConfiguration *configuration;
@property (retain, nonatomic) ASWriteReviewWindowController *reviewWindowController;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;

@end
