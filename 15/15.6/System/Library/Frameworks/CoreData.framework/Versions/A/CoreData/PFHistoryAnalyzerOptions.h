@interface PFHistoryAnalyzerOptions : NSObject <NSCopying> {
    char _automaticallyPruneTransientRecords;
    unsigned long long _transactionLimit;
    unsigned long long _contextMemoryLimitBytes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
