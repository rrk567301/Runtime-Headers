@interface AVTelemetryInterval : NSObject {
    unsigned long long apiCodeStore;
    unsigned long long startTime;
    BOOL updatedCounts;
}

- (void)end;
- (void)dealloc;
- (id)initAndStartWith:(unsigned long long)a0;

@end
