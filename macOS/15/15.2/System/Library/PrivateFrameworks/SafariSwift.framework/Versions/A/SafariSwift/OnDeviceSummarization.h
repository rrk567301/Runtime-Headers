@class NSString, _OnDeviceSummarization;
@protocol OnDeviceSummarizationDelegate;

@interface OnDeviceSummarization : NSObject <_OnDeviceSummarizationDelegate> {
    _OnDeviceSummarization *_summarizer;
}

@property (class, readonly, nonatomic) BOOL isRestricted;

@property (readonly, copy, nonatomic) NSString *summary;
@property (readonly, nonatomic) BOOL isSafe;
@property (weak, nonatomic) id<OnDeviceSummarizationDelegate> delegate;

+ (void)checkSummarizationAvailabilityWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)didErrorOutForSummarization:(id)a0;
- (void)didFinishSummaryForSummarization:(id)a0;
- (void)requestSummaryForString:(id)a0;

@end
