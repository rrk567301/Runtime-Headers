@class NSString, NSArray, NSOrderedSet;

@interface PPTHistogramDimensionConfig : NSObject <NSSecureCoding, NSCopying> {
    double _minRange;
    double _maxRange;
    unsigned long long _histBinCount;
    NSArray *_histEdges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *label;
@property (readonly) unsigned long long binCount;
@property (readonly) struct { double x0; double x1; } range;
@property (readonly) NSArray *edges;
@property (readonly) BOOL useOverflowBins;
@property (readonly) BOOL useForAccumulators;
@property (readonly) NSArray *samples;
@property (readonly) NSOrderedSet *categories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 label:(id)a2 options:(struct { BOOL x0; BOOL x1; })a3 samples:(id)a4;
- (id)initWithEdges:(id)a0 label:(id)a1 options:(struct { BOOL x0; BOOL x1; })a2 samples:(id)a3;
- (id)initWithCategories:(id)a0 label:(id)a1 options:(struct { BOOL x0; BOOL x1; })a2 samples:(id)a3;
- (id)configurationEdges;

@end
