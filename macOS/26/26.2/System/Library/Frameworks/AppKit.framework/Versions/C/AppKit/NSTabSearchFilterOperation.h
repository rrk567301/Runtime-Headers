@class NSArray, NSString;

@interface NSTabSearchFilterOperation : NSOperation

@property (copy, nonatomic) NSArray *tabInfo;
@property (readonly, copy, nonatomic) id /* block */ filterCompletionCallback;
@property (readonly, nonatomic) NSString *filterText;

- (void)main;
- (void).cxx_destruct;
- (void)_completeOperationWithIndexes:(id)a0;
- (id)initWithTabInfoForFilteringTabs:(id)a0 filterText:(id)a1 completionCallback:(id /* block */)a2;

@end
