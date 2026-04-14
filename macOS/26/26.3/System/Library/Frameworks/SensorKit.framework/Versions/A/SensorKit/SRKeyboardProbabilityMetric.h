@class NSArray, NSUnit, NSMutableArray;

@interface SRKeyboardProbabilityMetric : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSUnit *unitType;
@property (nonatomic) long long totalDataSamples;
@property (retain) NSMutableArray *mutableSampleValues;
@property (readonly, copy) NSArray *distributionSampleValues;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)sr_dictionaryRepresentation;

@end
