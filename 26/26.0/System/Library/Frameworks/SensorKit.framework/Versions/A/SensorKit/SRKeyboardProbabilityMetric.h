@class NSArray, NSUnit, NSMutableArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (readonly, copy) NSArray *distributionSampleValues;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
