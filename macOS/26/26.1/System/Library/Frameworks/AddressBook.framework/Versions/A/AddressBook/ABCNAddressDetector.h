@class ABCNDDScanner;

@interface ABCNAddressDetector : NSObject {
    ABCNDDScanner *_scanner;
}

+ (id)detector;

- (void).cxx_destruct;
- (id)init;
- (id)firstAddressInString:(id)a0;

@end
