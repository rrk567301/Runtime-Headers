@class NSString, WBSSingleCreditCardData;

@interface SingleCreditCardDataCompletionListItemInformation : NSObject

@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *headerTextForCompletionList;
@property (readonly, copy, nonatomic) NSString *headerTextForFunctionBar;
@property (readonly, nonatomic) WBSSingleCreditCardData *singleCreditCardData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSingleCreditCardData:(id)a0 displayText:(id)a1 headerTextForCompletionList:(id)a2 headerTextForFunctionBar:(id)a3;

@end
