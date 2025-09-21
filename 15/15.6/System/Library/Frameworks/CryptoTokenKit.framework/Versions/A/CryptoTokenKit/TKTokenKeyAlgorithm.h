@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject {
    NSArray *_algorithms;
}

- (void).cxx_destruct;
- (id)initWithAlgorithmsArray:(id)a0;
- (char)isAlgorithm:(struct __CFString { } *)a0;
- (char)supportsAlgorithm:(struct __CFString { } *)a0;

@end
