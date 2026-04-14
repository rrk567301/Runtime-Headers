@class NSArray, NSUnit, NSMutableArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (readonly, copy) NSArray *distributionSampleValues;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)sr_dictionaryRepresentation;

@end
