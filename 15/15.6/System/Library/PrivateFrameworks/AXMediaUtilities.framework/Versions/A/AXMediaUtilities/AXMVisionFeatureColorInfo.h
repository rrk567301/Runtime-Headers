@class NSArray;

@interface AXMVisionFeatureColorInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSArray *mainColors;
@property (retain, nonatomic) NSArray *mainColorWeights;
@property (nonatomic) double remainingColorWeight;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateMainColors:(id /* block */)a0;
- (void)setMainColors:(id)a0 weights:(id)a1;

@end
