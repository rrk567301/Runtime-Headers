@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray

@property (retain) MLMultiArray *multiArray;

- (unsigned long long)count;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWrappingMultiArray:(id)a0;

@end
