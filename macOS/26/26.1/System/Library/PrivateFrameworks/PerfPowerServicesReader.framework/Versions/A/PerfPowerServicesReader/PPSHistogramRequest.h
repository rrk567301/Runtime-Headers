@class NSArray;

@interface PPSHistogramRequest : PPSDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *dimensions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0 predicate:(id)a1 timeFilter:(id)a2;

@end
