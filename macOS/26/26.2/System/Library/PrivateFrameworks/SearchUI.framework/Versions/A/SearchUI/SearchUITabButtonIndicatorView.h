@class SearchUIRowModel, SearchUIButtonItemViewController;
@protocol SearchUIFeedbackDelegate;

@interface SearchUITabButtonIndicatorView : NUIContainerStackView

@property (retain, nonatomic) SearchUIButtonItemViewController *tabButtonViewController;
@property (retain, nonatomic) SearchUIRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (void).cxx_destruct;
- (id)init;

@end
