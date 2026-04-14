@class SearchUIRowModel, SFPunchout;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIReportAConcernMenuItem : NSMenuItem

@property (retain) SearchUIRowModel *rowModel;
@property (retain) SFPunchout *punchout;
@property (weak) id<SearchUIFeedbackDelegate> feedbackDelegate;

- (void).cxx_destruct;
- (void)didSelectMenuItem;
- (id)initWithPunchout:(id)a0 rowModel:(id)a1 feedbackDelegate:(id)a2;

@end
