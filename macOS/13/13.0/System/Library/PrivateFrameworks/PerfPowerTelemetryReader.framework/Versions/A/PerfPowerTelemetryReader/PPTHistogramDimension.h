@class NSString, NSArray, PPTHistogram;

@interface PPTHistogramDimension : NSObject <NSSecureCoding, NSCopying> {
    int _index;
    PPTHistogram *_histogram;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *label;
@property (readonly) struct { double x0; double x1; } range;
@property (readonly) double area;
@property (readonly) double minSample;
@property (readonly) double maxSample;
@property (readonly) double mean;
@property (readonly) double median;
@property (readonly) double mode;
@property (readonly) double variance;
@property (readonly) NSArray *categories;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHistogram:(id)a0 andIndex:(unsigned long long)a1;

@end
