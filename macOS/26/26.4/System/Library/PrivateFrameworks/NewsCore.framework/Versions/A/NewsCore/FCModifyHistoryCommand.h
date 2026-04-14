@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand

@property (readonly, copy, nonatomic) NSArray *historyItems;
@property (readonly, copy, nonatomic) NSArray *recordItems;

+ (id)desiredKeys;

- (id)initWithHistoryItems:(id)a0 merge:(BOOL)a1;
- (BOOL)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (id)recordZoneName;
- (void).cxx_destruct;

@end
