@interface SGExtractionScannerWrapper : NSObject {
    struct __DDScanner { } *_ddScanner;
}

- (id)init;
- (void)dealloc;

@end
