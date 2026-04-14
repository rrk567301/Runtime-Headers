@class NUIContainerBoxView, SearchUICommandHandler, SearchUIRowModel, NSString, SearchUICommandButtonItem, SearchUIButtonItemView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUISFButtonItemViewController : NSViewController <SearchUIButtonItemViewDelegate>

@property (retain, nonatomic) SearchUIButtonItemView *buttonItemView;
@property (retain) NUIContainerBoxView *view;
@property (retain, nonatomic) SearchUICommandHandler *commandHandler;
@property (retain, nonatomic) SearchUICommandButtonItem *buttonItem;
@property (nonatomic) unsigned long long buttonItemViewType;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (weak, nonatomic) SearchUIRowModel *rowModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)searchUIButtonItemViewClass;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)buttonPressed;
- (id)previewCommandHandler;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1;
- (void)updateWithButtonItem:(id)a0 buttonItemViewType:(unsigned long long)a1 isStatusUpdate:(BOOL)a2;

@end
