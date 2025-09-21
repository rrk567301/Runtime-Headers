@class NSView, SearchUIDetailedRowModel, NSString;
@protocol SearchUIFeedbackDelegate;

@interface SearchUILeadingViewController : NSObject <SearchUIDetailedRowComponent>

@property (readonly) unsigned long long type;
@property (readonly) BOOL shouldCenterAlignToTitle;
@property (retain, nonatomic) NSView *view;
@property (nonatomic) BOOL usesCompactWidth;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (weak, nonatomic) id<SearchUIFeedbackDelegate> feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)leadingViewClassForRowModel:(id)a0;
+ (BOOL)supportsRowModel:(id)a0;

- (id)imageView;
- (id)init;
- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (id)setupView;
- (BOOL)shouldVerticallyCenter;
- (void)updateWithRowModel:(id)a0;

@end
