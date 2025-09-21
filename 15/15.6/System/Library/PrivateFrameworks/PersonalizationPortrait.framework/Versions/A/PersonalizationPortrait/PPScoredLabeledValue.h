@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PPLabeledValue *labeledValue;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) unsigned char flags;

+ (id)scoredLabeledValueWithLabeledValue:(id)a0 score:(double)a1 flags:(unsigned char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)reverseCompare:(id)a0;
- (id)initWithLabeledValue:(id)a0 score:(double)a1 flags:(unsigned char)a2;
- (char)isEqualToScoredLabeledValue:(id)a0;

@end
