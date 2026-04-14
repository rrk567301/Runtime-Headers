@class NSString, NSImage, NSArray, SFSearchResult, NSNumber;
@protocol AssistantPopoverResultCollectionViewCellDelegate;

@interface AssistantPopoverResult : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSImage *headerIcon;
@property (retain, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *summaryDisclamer;
@property (copy, nonatomic) NSNumber *componentIdentifier;
@property (nonatomic) long long type;
@property (weak, nonatomic) id<AssistantPopoverResultCollectionViewCellDelegate> readerCellDelegate;
@property (retain, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) SFSearchResult *entityCardSearchResult;
@property (copy, nonatomic) NSString *persistedOnDemandSummary;
@property (copy, nonatomic) NSString *customSummaryHeader;
@property (copy, nonatomic) NSString *customSummarySymbol;
@property (copy, nonatomic) NSString *customSummaryFooter;

- (void).cxx_destruct;

@end
