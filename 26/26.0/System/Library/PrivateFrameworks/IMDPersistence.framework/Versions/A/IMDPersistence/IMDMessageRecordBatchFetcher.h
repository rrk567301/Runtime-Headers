@class NSPredicate, NSString;

@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher

@property (readonly, copy, nonatomic) NSPredicate *chatPredicate;
@property (readonly, copy, nonatomic) NSString *associatedChatGUID;
@property (readonly, nonatomic) BOOL sortAscending;
@property (nonatomic) BOOL parentedOnly;

- (id)init;
- (void).cxx_destruct;
- (id)_rowIDPredicate;
- (id)initWithAssociatedChatGUID:(id)a0;
- (id)initWithAssociatedChatGUID:(id)a0 sortAscending:(BOOL)a1;
- (id)initWithChatPredicate:(id)a0 sortAscending:(BOOL)a1;
- (id)nextBatchWithSize:(unsigned long long)a0;

@end
