@class NSData, SFRichText;

@interface ProactivePredictionClient.SPParameterizedTool : NSObject

@property (nonatomic, readonly) NSData *toolInvocationData;
@property (nonatomic, readonly) NSData *toolInvocationSummaryData;
@property (nonatomic, readonly) SFRichText *parameterizedTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithToolInvocationData:(id)a0 toolInvocationSummaryData:(id)a1 parameterizedTitle:(id)a2;

@end
