@class NSString;

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSString *associatedChatGUID;

- (void).cxx_destruct;
- (id)nextBatchWithSize:(unsigned long long)a0;
- (id)initWithAssociatedChatGUID:(id)a0;

@end
