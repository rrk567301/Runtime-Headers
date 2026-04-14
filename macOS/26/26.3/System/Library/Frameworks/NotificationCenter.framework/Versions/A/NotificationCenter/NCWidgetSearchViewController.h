@class NSArray, NSString;
@protocol NCWidgetSearchViewDelegate;

@interface NCWidgetSearchViewController : NSViewController {
    NSArray *_searchResults;
    NSString *_searchResultsPlaceholderString;
}

@property (weak) id<NCWidgetSearchViewDelegate> delegate;
@property (copy) NSArray *searchResults;
@property (copy) NSString *searchDescription;
@property (copy) NSString *searchResultsPlaceholderString;
@property (copy) NSString *searchResultKeyPath;

- (void).cxx_destruct;
- (id)nibBundle;

@end
