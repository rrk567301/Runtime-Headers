@class NSArray;

@interface TKTokenKeyAlgorithm : NSObject {
    NSArray *_algorithms;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithAlgorithmsArray:(id)a0;
- (BOOL)isAlgorithm:(struct __CFString { } *)a0;
- (BOOL)supportsAlgorithm:(struct __CFString { } *)a0;

@end
