@interface SMPathStats : NSObject {
    unsigned long long allocatedSize;
    unsigned long long copierSize;
    unsigned long long fileCount;
}

- (void)subtract:(id)a0;
- (void)add:(id)a0;

@end
