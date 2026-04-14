@class NSString;

@interface HDDatabaseJournalMetrics : NSObject {
    void /* unknown type, empty encoding */ store;
}

@property (nonatomic, readonly) NSString *loggingDescription;

- (void).cxx_destruct;
- (id)init;
- (void)addWithClassName:(id)a0 size:(long long)a1 duration:(double)a2;

@end
