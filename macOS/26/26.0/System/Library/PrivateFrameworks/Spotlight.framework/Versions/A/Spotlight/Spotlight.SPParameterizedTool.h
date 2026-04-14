@class NSData, SFRichText;

@interface Spotlight.SPParameterizedTool : NSObject

@property (nonatomic, readonly) NSData *toolInvocationData;
@property (nonatomic, readonly) NSData *toolInvocationSummaryData;
@property (nonatomic, readonly) SFRichText *parameterizedTitle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithToolInvocationData:(id)a0 toolInvocationSummaryData:(id)a1 parameterizedTitle:(id)a2;

@end
