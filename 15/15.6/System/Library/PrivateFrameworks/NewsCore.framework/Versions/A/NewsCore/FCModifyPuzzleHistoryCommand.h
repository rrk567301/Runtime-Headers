@class NSDictionary;

@interface FCModifyPuzzleHistoryCommand : FCModifyRecordsCommand

@property (copy, nonatomic) NSDictionary *puzzleTypeTraitsDict;

+ (id)desiredKeys;

- (void).cxx_destruct;
- (id)initWithPuzzleHistoryItems:(id)a0 merge:(char)a1;
- (char)mergeLocalRecord:(id)a0 withRemoteRecord:(id)a1;
- (unsigned long long)puzzleTypeTraitsForPuzzleTypeID:(id)a0;

@end
