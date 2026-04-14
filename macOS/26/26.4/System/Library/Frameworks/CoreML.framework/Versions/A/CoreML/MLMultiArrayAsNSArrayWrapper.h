@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray;

- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)initWrappingMultiArray:(id)a0;

@end
