@class NSArray;

@interface PPTHistogramBin : NSObject

@property (readonly) unsigned long long count;
@property (readonly) double max;
@property (readonly) double min;
@property (readonly) double mean;
@property (readonly) double sum;
@property (readonly) NSArray *ranges;
@property (readonly) NSArray *categories;
@property (readonly) NSArray *indices;

- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0 min:(double)a1 max:(double)a2 mean:(double)a3 sum:(double)a4 ranges:(id)a5 categories:(id)a6 indices:(id)a7;

@end
