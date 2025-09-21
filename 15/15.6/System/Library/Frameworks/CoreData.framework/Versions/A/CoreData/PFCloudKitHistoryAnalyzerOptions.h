@class NSCloudKitMirroringRequest;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {
    char _includePrivateTransactions;
    NSCloudKitMirroringRequest *_request;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
