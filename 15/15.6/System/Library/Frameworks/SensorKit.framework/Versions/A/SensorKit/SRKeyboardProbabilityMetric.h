@class NSArray, NSUnit, NSMutableArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (readonly, copy) NSArray *distributionSampleValues;

- (void)dealloc;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
