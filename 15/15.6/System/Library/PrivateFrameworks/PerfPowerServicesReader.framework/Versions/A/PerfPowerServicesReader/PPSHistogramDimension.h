@class NSArray, NSString;

@interface PPSHistogramDimension : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSArray *edges;
@property (readonly) unsigned long long extent;
@property (readonly) char isCategoryDimension;
@property (readonly, copy) NSString *metricName;
@property (readonly) struct { double min; double max; } range;
@property (readonly) unsigned long long size;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONRepresentation;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 metricName:(id)a2;
- (id)initWithCategories:(id)a0 metricName:(id)a1;
- (id)initWithEdges:(id)a0 metricName:(id)a1;
- (char)isEqualToHistogramDimension:(id)a0;

@end
