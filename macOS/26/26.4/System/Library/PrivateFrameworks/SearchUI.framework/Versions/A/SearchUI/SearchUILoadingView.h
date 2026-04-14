@class NSProgressIndicator, TLKLabel;

@interface SearchUILoadingView : NUIContainerBoxView

@property (retain) NSProgressIndicator *loadingSpinner;
@property (retain) TLKLabel *loadingLabel;
@property (nonatomic) unsigned long long loadingState;

- (void).cxx_destruct;
- (id)init;

@end
