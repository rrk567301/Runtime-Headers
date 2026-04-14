@class SearchUIRowModel, SearchUIButtonItemViewController;
@protocol SearchUIFeedbackDelegate;

@interface SearchUITabButtonIndicatorView : NUIContainerStackView

@property (retain, nonatomic) SearchUIButtonItemViewController *tabButtonViewController;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (id)init;
- (void).cxx_destruct;

@end
