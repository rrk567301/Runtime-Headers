@class EMTSpan, NSArray;

@interface EMTAlignmentProcessorSpanResult : NSObject

@property (readonly, nonatomic) EMTSpan *sourceSpan;
@property (readonly, copy, nonatomic) NSArray *projections;

- (void).cxx_destruct;
- (id)initWithSourceSpan:(id)a0 projections:(id)a1;

@end
