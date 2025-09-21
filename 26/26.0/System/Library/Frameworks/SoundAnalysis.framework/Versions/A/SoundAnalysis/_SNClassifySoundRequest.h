@class NSArray, SNTimeDurationConstraint;

@interface _SNClassifySoundRequest : NSObject <SNRequest, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) double overlapFactor;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } windowDuration;
@property (nonatomic, readonly) SNTimeDurationConstraint *windowDurationConstraint;
@property (nonatomic, readonly) NSArray *knownClassifications;
@property (nonatomic, readonly) long long hash;

+ (id)eagerlyAllocateModelsForRequest:(id)a0 error:(id *)a1;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithClassifierIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setOverlapFactor:(double)a0 error:(id *)a1;

@end
