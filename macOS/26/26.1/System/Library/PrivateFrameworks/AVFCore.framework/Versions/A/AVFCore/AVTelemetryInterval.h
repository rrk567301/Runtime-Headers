@interface AVTelemetryInterval : NSObject {
    unsigned long long apiCodeStore;
    unsigned long long startTime;
}

- (void)end;
- (id)initAndStartWith:(unsigned long long)a0;

@end
