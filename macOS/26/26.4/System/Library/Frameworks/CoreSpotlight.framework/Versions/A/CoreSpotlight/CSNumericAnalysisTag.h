@class NSNumber, NSArray;

@interface CSNumericAnalysisTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSNumber *primaryValue;
@property (readonly, copy) NSArray *components;
@property (readonly, nonatomic) double confidence;

- (void)encodeWithCSCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryValue:(id)a0 components:(id)a1 confidence:(double)a2;

@end
