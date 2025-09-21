@class NSArray;

@interface FCModifyHistoryCommand : FCModifyRecordsCommand

@property (readonly, copy, nonatomic) NSArray *historyItems;
@property (readonly, copy, nonatomic) NSArray *recordItems;

+ (id)desiredKeys;

- (void).cxx_destruct;
- (id)recordZoneName;
- (id)initWithHistoryItems:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;

@end
