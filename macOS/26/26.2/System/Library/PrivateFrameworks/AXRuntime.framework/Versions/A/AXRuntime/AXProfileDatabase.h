@class NSMutableArray;

@interface AXProfileDatabase : NSObject {
    NSMutableArray *_entries;
}

+ (id)sharedDatabase;

- (void).cxx_destruct;
- (id)init;
- (void)registerEntry:(id)a0;
- (id)debugStatistics;
- (id)transactionSummary;

@end
