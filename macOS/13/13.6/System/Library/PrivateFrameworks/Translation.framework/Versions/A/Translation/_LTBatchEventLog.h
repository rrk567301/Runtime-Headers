@interface _LTBatchEventLog : NSObject

- (id)makeContext;
- (void)endSuccessfully;
- (void)cancelWithReason:(id)a0;
- (void)endWithError:(id)a0 failedParagraphs:(unsigned long long)a1;
- (id)initWithRequest:(id)a0 logID:(id)a1;
- (void)sendWithContext:(id)a0;
- (void)startWithParagraphCount:(unsigned long long)a0;

@end
