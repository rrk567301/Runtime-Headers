@class NSString;

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSString *associatedChatGUID;
@property (readonly, nonatomic) char sortAscending;
@property (nonatomic) char parentedOnly;

- (id)init;
- (void).cxx_destruct;
- (id)_rowIDPredicate;
- (id)initWithAssociatedChatGUID:(id)a0;
- (id)initWithAssociatedChatGUID:(id)a0 sortAscending:(char)a1;
- (id)nextBatchWithSize:(unsigned long long)a0;

@end
