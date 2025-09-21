@class NSArray;

@interface PPSHistogramRequest : PPSDataRequest <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSArray *dimensions;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDimensions:(id)a0 predicate:(id)a1 timeFilter:(id)a2;

@end
