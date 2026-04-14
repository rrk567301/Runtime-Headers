@class NSData, NSMutableDictionary;
@protocol IMDCNContactStore;

@interface IMDContactBatchFetcher : NSObject

@property (retain, nonatomic) id<IMDCNContactStore> contactStore;
@property (retain, nonatomic) NSMutableDictionary *fetchedContacts;
@property (readonly, nonatomic) NSData *currentHistoryToken;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (void)batchFetchContactsWithKeyDescriptors:(id)a0 addresses:(id)a1;

@end
