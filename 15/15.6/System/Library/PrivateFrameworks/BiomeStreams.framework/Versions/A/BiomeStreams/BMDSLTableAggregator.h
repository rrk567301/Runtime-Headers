@class NSArray;

@interface BMDSLTableAggregator : BMDSLAggregator

@property (retain, nonatomic) NSArray *transforms;
@property (readonly, copy, nonatomic) NSArray *classNames;
@property (readonly, copy, nonatomic) NSArray *classKeyPaths;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bpsAggregator;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1 classKeyPaths:(id)a2;
- (id)initWithTableTransforms:(id)a0 classNames:(id)a1 classKeyPaths:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
